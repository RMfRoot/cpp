/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 03:04:52 by egeorgel          #+#    #+#             */
/*   Updated: 2023/07/02 02:07:37 by egeorgel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lsed.hpp"

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

void	setOutput(std::string str, char *filename)
{
	std::ofstream	file;
	std::string		ofile;
	ofile.assign(filename);
	ofile += ".replace";
	file.exceptions(std::ofstream::failbit);
	try {
		file.open(ofile);
		file << str << std::endl;
		file.close();
	}
	catch (std::ofstream::failure e) {
    	std::cerr << "Open/read/close error" << std::endl;
		exit(1);
	}
	
}

std::string replace_in(char **argv, std::string str)
{
	std::string find;
	std::string replace;
	find.assign(argv[2]);
	replace.assign(argv[3]);
	size_t pos;
	while ((pos = str.find(find)) != std::string::npos)
	{
		str.erase(pos, find.size());
		str.insert(pos, replace);
	}
	return(str);
}

int	main(int argc, char **argv)
{
	std::string find;
	std::string replace;
	try{
		if (argc != 4)
			throw parseException();
	}catch (parseException err){
		std::cerr << err.what() << std::endl;
		exit(1);
	}
	std::string str = getFile(argv[1]);
	str = replace_in(argv, str);
	setOutput(str, argv[1]);
}