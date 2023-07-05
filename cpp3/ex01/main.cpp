#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap robot2("blyat");
	ClapTrap robot(robot2);
	ScavTrap robot1(robot);
	ScavTrap bigRobot("BIG");
	robot1 = robot;
	robot = robot1;

	robot.attack("Scrapss");
	robot.takeDamage(5);
	robot1.takeDamage(11);
	robot1.beRepaired(3);
	robot.beRepaired(5);
	bigRobot.attack("Scraps");
}