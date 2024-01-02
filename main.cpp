#include <iostream>
#include <string>
#include <iomanip>
#include "Zombie.hpp"

int main(void)
{
	Zombie *Zombie1;

	Zombie1 = newZombie("Zombie1");
	Zombie1->announce();
	randomChump("Zombie2");
	delete (Zombie1);
	return (0);
}