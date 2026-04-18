#include "ClapTrap.hpp"

int     main(void)
{
        ClapTrap obj("Zbyszek");
        ClapTrap newObj;

        newObj = obj;

        std::cout << "obj: " << obj.getName() << " " << obj.getHitPoints() << " ";
        std::cout << obj.getEnergyPoints() << " " << obj.getAttackDamage() << std::endl;

        std::cout << "newObj: " << newObj.getName() << " " << newObj.getHitPoints() << " ";
        std::cout << newObj.getEnergyPoints() << " " << newObj.getAttackDamage() << std::endl;

        newObj.setName("Bogdan");
        ClapTrap newerObj("Marian");

        std::cout << "newObj: " << newObj.getName() << " " << newObj.getHitPoints() << " ";
        std::cout << newObj.getEnergyPoints() << " " << newObj.getAttackDamage() << std::endl;

        std::cout << "newerObj: " << newerObj.getName() << " " << newerObj.getHitPoints() << " ";
        std::cout << newerObj.getEnergyPoints() << " " << newerObj.getAttackDamage() << std::endl;
        
        obj.attack("Bogdan");
        newObj.takeDamage(6);
        newObj.beRepaired(2);
        newerObj.attack("Bogdan");
        newObj.takeDamage(6);
        newObj.beRepaired(2);

        return (0);
}
