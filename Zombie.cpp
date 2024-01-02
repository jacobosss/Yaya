#include "Zombie.hpp"

void	Zombie::announce(void) const
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " has been destroyed" << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}


std::string	Zombie::getName(void) const
{
	return (this->name);
}