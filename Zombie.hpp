#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
	private:

		std::string	name;

	public:
		Zombie(void);
		~Zombie(void);

		void		announce(void) const;

		void		setName(std::string name);
		std::string	getName(void) const;
};

void randomChump( std::string name);
Zombie *newZombie( std::string name );

#endif