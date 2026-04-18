#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{

        ScavTrap obj2("Zbyszek");
        ScavTrap newObj2;

        newObj2 = obj2;

        std::cout << "obj2: " << obj2.getName() << " " << obj2.getHitPoints() << " ";
        std::cout << obj2.getEnergyPoints() << " " << obj2.getAttackDamage() << std::endl;

        std::cout << "newObj2: " << newObj2.getName() << " " << newObj2.getHitPoints() << " ";
        std::cout << newObj2.getEnergyPoints() << " " << newObj2.getAttackDamage() << std::endl;

        newObj2.setName("Bogdan");
        ScavTrap newerObj2("Marian");
        ScavTrap newestObj2(newerObj2);

        std::cout << "newObj2: " << newObj2.getName() << " " << newObj2.getHitPoints() << " ";
        std::cout << newObj2.getEnergyPoints() << " " << newObj2.getAttackDamage() << std::endl;

        std::cout << "newerObj2: " << newerObj2.getName() << " " << newerObj2.getHitPoints() << " ";
        std::cout << newerObj2.getEnergyPoints() << " " << newerObj2.getAttackDamage() << std::endl;

        std::cout << "newestObj2: " << newestObj2.getName() << " " << newestObj2.getHitPoints() << " ";
        std::cout << newestObj2.getEnergyPoints() << " " << newestObj2.getAttackDamage() << std::endl;

        obj2.attack("Bogdan");
        newObj2.takeDamage(60);
        newObj2.beRepaired(12);
        newerObj2.attack("Bogdan");
        newObj2.takeDamage(80);
        newObj2.beRepaired(20);

        newerObj2.guardGate();

        return (0);
}
