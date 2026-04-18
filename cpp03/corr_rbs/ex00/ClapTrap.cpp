#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
        :       _hitPoints(HITPOINTS),
                _energyPoints(10),
                _attackDamage(0)
{
        std::cout << "Default constructor called" << std::endl;
        return ;
}

ClapTrap::ClapTrap(std:: string name) : _name(name),  _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
        std::cout << "Parametrized constructor called" << std::endl;
        return ;
}

ClapTrap::ClapTrap(ClapTrap const & cpy)
{
        std::cout << "Copy constructor called" << std::endl;
        *this = cpy;
        return ;
}

ClapTrap&       ClapTrap::operator=(ClapTrap const & src)
{
        std::cout << "Copy assign operator called" << std::endl;
        if (this != &src)
        {
                _name = src.getName();
                _hitPoints = src.getHitPoints();
                _energyPoints = src.getEnergyPoints();
                _attackDamage = src.getAttackDamage();
        }
        return (*this);
}

ClapTrap::~ClapTrap(void)
{
        std::cout << "Destructor called" << std::endl;
        return ;
}

std::string     ClapTrap::getName() const
{
        return (this->_name);
}
void            ClapTrap::setName(std::string name)
{
        this->_name = name;
        return ;
}

unsigned int     ClapTrap::getHitPoints() const
{
        return (this->_hitPoints);
}
void            ClapTrap::setHitPoints(unsigned int hitPoints)
{
        this->_hitPoints = hitPoints;
        return ;
}

int     ClapTrap::getEnergyPoints() const
{
        return (this->_energyPoints);
}
void            ClapTrap::setEnergyPoints(int energyPoints)
{
        this->_energyPoints = energyPoints;
        return ;
}

int     ClapTrap::getAttackDamage() const
{
        return (this->_attackDamage);
}
void            ClapTrap::setAttackDamage(int attackDamage)
{
        this->_attackDamage = attackDamage;
        return ;
}

void            ClapTrap::attack(const std::string& target)
{
        std::cout << _name << " attacks " << target << ". ";
        std::cout << target << " looses hit points." << std::endl;
        return ;
}

void            ClapTrap::takeDamage(unsigned int amount)
{
        if (_hitPoints)
        {
                std::cout << _name << " takes damage of " << amount << ". ";
                if (amount >= _hitPoints)
                        _hitPoints = 0;
                else
                        _hitPoints -= amount;
                std::cout << "Curent hit points: " << _hitPoints << "." << std::endl;
        }
        else
                std::cout << _name << " has no hit points left." << std::endl;
        return;
}

void            ClapTrap::beRepaired(unsigned int amount)
{
        if (_hitPoints)
        {
                std::cout << _name << " regains " << amount << " points. ";
                _hitPoints += amount;
                std::cout << "Current hit points: " << _hitPoints << "." << std::endl;
        }
        else
                std::cout << _name << " has no hit points left." << std::endl;
        return;
}
