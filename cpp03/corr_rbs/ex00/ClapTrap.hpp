#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

# define HITPOINTS 12

class ClapTrap
{

        std::string     _name;
        unsigned int    _hitPoints;
        int             _energyPoints;
        int             _attackDamage;

        public:

        ClapTrap(void);
        ClapTrap(std:: string name);
        ClapTrap(ClapTrap const & cpy);
        ClapTrap&       operator=(ClapTrap const & src);
        ~ClapTrap(void);

        std::string     getName() const;
        void            setName(std::string name);
        unsigned int    getHitPoints() const;
        void            setHitPoints(unsigned int hitPoints);
        int             getEnergyPoints() const;
        void            setEnergyPoints(int energyPoints);
        int             getAttackDamage() const;
        void            setAttackDamage(int attackDamage);

        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);


};

#endif