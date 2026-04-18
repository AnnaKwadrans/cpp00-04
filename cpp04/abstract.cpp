#include <string>
#include <iostream>

class ACharacter // A - abstract class
{
private:
        /* data */
public:
        //ACharacter(/* args */);
        //~ACharacter();

        virtual void    attack(std::string const & target) = 0; // has no implemetation
        void            sayHello(std::string const & target);
};

class   Warrior : public ACharacter
{
public:
        virtual void    attack(std::string const & target);
};

class IWaterSource {};
class ICoffee {};

class ICoffeMaker // I - interface
{
private:
        /* data */
public:
        ICoffeMaker(/* args */);
        ~ICoffeMaker();

        virtual void            fillWaterTank(IWaterSource * src) = 0;
        virtual ICoffee *        makeCoffee(std::string const & type) = 0;
};

ICoffeMaker::ICoffeMaker(/* args */)
{
}

ICoffeMaker::~ICoffeMaker()
{
}




/*
ACharacter::ACharacter()) {
}

ACharacter::~ACharacter() {
}
*/
void    ACharacter::sayHello(std::string const & target) {
        std::cout << "Hello " << target << "!" << std::endl;
}

void    Warrior::attack(std::string const & target) {
        std::cout << "Warrior attacks " << target << " with a sword." << std::endl;
}

int     main(void)
{

        ACharacter*     a = new Warrior;

        // NO SE PUEDE
        //ACharacter*     b = new ACharacter;

        a->sayHello("Marian");
        a->attack("Bogdan");

        delete a;
        //delete b;

        return (0);
}
