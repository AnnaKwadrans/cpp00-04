#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
        std::cout << "ScavTrap: Default constructor called" << std::endl;
        setHitPoints(100);
        setEnergyPoints(50);
        setAttackDamage(50);
        return ;
}

ScavTrap::ScavTrap(std:: string name) : ClapTrap(name)
{
        std::cout << "ScavTrap: Parametrized constructor called" << std::endl;
        setHitPoints(100);
        setEnergyPoints(50);
        setAttackDamage(50);
        return ;
}

ScavTrap::ScavTrap(ScavTrap const & cpy) : ClapTrap(cpy)
{
        std::cout << "ScavTrap: Copy constructor called" << std::endl;
        *this = cpy;
        return ;
}

ScavTrap&       ScavTrap::operator=(ScavTrap const & src)
{
        std::cout << "ScavTrap: Copy assign operator called" << std::endl;
        if (this != &src)
                ClapTrap::operator=(src);
        return (*this);
}

ScavTrap::~ScavTrap(void)
{
        std::cout << "ScavTrap: Destructor called" << std::endl;
        return ;
}

void            ScavTrap::attack(const std::string& target)
{
        std::cout << "ScavTrap: " << this->getName() << " attacks " << target << ". ";
        std::cout << target << " looses hit points." << std::endl;
        return ;
}

void            ScavTrap::guardGate(void)
{
        std::cout << "ScavTrap " << this->getName() << " is now in gate keeper mode.";
        std::cout << std::endl;
        return ;
}
