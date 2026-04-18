#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main(void)
{


        FragTrap obj2("Zbyszek");
        FragTrap newObj2;

        newObj2 = obj2;

        std::cout << "obj2: " << obj2.getName() << " " << obj2.getHitPoints() << " ";
        std::cout << obj2.getEnergyPoints() << " " << obj2.getAttackDamage() << std::endl;

        std::cout << "newObj2: " << newObj2.getName() << " " << newObj2.getHitPoints() << " ";
        std::cout << newObj2.getEnergyPoints() << " " << newObj2.getAttackDamage() << std::endl;

        newObj2.setName("Bogdan");
        FragTrap newerObj2("Marian");
        FragTrap newestObj2(newerObj2);

        std::cout << "newObj2: " << newObj2.getName() << " " << newObj2.getHitPoints() << " ";
        std::cout << newObj2.getEnergyPoints() << " " << newObj2.getAttackDamage() << std::endl;

        std::cout << "newerObj2: " << newerObj2.getName() << " " << newerObj2.getHitPoints() << " ";
        std::cout << newerObj2.getEnergyPoints() << " " << newerObj2.getAttackDamage() << std::endl;

        std::cout << "newestObj2: " << newestObj2.getName() << " " << newestObj2.getHitPoints() << " ";
        std::cout << newestObj2.getEnergyPoints() << " " << newestObj2.getAttackDamage() << std::endl;

        obj2.attack("Bogdan");
        newObj2.takeDamage(90);
        newObj2.beRepaired(2);
        newerObj2.attack("Bogdan");
        newObj2.takeDamage(19);
        newObj2.beRepaired(2);

        newerObj2.highFivesGuys();

        return (0);
}
