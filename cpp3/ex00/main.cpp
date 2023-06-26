#include "ClapTrap.h"

int	main()
{
	ClapTrap robot("Scrap");
	ClapTrap robot1("blyat");
	robot1 = robot;
	ClapTrap robot2(robot);

	robot.attack("Scrapss");
	robot.takeDamage(5);
	robot1.takeDamage(11);
	robot1.beRepaired(3);
	robot.beRepaired(5);
}