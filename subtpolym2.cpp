#include <iostream>
#include <string>

class Character
{
private:
        /* data */
public:
        Character(/* args */);
        ~Character();

        // virtual: sirve para indicar que una función puede ser sobrescrita
        // en clases derivadas.
        virtual void    sayHello(std::string const & target);

};

class   Warrior : public Character
{
public:

        void    sayHello(std::string const & target);
};






Character::Character(/* args */)
{
}


void    Character::sayHello(std::string const & target)
{
        std::cout << "Hello " << target << "!" << std::endl;
}

void    Warrior::sayHello(std::string const & target)
{
        std::cout << "Fuck off, " << target << ", I don't like you." << std::endl;
}

int     main(void)
{
        Warrior*        a = new Warrior;

        Character*      b = new Warrior;

        // NO SE PUEDE
        // Warrior*        c = new Character;


        a->sayHello("Marian"); // prints: Fuck off, Marian, I don't like you. 
        b->sayHello("Bogdan"); // prints: Fuck off, Bogdan, I don't like you.

        return (0);
}
