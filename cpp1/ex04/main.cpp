/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 03:04:52 by egeorgel          #+#    #+#             */
/*   Updated: 2023/06/27 02:14:37 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lsed.h"

struct parseException : public std::exception {
   const char * what () const throw () {
      return "Number of arguments is invalid";
   }
};

std::string	getFile(std::string str)
{
	std::ifstream file;
	std::string in;

	file.exceptions (std::ifstream::failbit);
	try {
		file.open(str);
		char c;
		while (file.get(c))
			in += c;
		file.close();
	}
	catch (std::ifstream::failure e) {
    	std::cerr << "Open/read/close error" << std::endl;
		exit(1);
	}
	return (in);
}

int	main(int argc, char **argv)
{
	std::string find;
	std::string replace;
	if (argc != 4)
	{
		try{	
			throw parseException();
		}catch (parseException err){
			std::cerr << err.what() << std::endl;
			exit(1);
		}
	}
	find = argv[2];
	replace = argv[3];
	std::string str = getFile(argv[1]);
	size_t pos;
	while ((pos = str.find(find)) != std::string::npos)
	{
		str.erase(pos, find.size());
		str.insert(pos, replace);
	}
	std::cout << str << std::endl;
}