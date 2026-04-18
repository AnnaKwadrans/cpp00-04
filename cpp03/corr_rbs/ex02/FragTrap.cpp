#include "FragTrap.hpp"

FragTrap::FragTrap() : 
        ClapTrap(),
        _hitPoints(100),
        _energyPoints(100)

{
        std::cout << "FragTrap: Default constructor called" << std::endl;
        setHitPoints(100);
        setEnergyPoints(100);
        setAttackDamage(30);
        return ;
}

FragTrap::FragTrap(std::string name)
        :       ClapTrap(name),
                _
{
        std::cout << "FragTrap: Parametrized constructor called" << std::endl;
        setHitPoints(100);
        setEnergyPoints(100);
        setAttackDamage(30);
        return ;
}

FragTrap::FragTrap(FragTrap const & cpy) : ClapTrap(cpy)
{
        std::cout << "FragTrap: Copy constructor called" << std::endl;
        *this = cpy;
        return ;
}

FragTrap&       FragTrap::operator=(FragTrap const & src)
{
        std::cout << "FragTrap: Copy assign operator called" << std::endl;
        if (this != &src)
                ClapTrap::operator=(src);
        return (*this);
}

FragTrap::~FragTrap()
{
        std::cout << "FragTrap: Destructor called" << std::endl;
        return ;
}

void            FragTrap::highFivesGuys(void)
{
        std::cout << "High fives guys!" << std::endl;
        return ;
}
