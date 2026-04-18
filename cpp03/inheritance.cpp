#include <string>

class Animal
{

    private:

        int _numberOfLegs;

    public:

        Animal();
        Animal(Animal const &);
        Animal& operator=(Animal const &);
        ~Animal();

        void    run(int distance);
        void    call();
        void    eat(std::string const & what);
        void    walk(int distance);

};

class Cat : public Animal // Cat inherits from Animal publicly
{

    private:

        int _numberOfLegs;

    public:

        Cat();
        Cat(Cat const &);
        Cat& operator=(Cat const &);
        ~Cat();

        //void    run(int distance); <- method inherited from Animal
        void    scornSomeone(std::string const & target);

};

class Pony // Pony inherits from Animal publicly
{

    private:

        int _muberOfLegs;

    public:

        Pony();
        Pony(Pony const &);
        Pony& operator=(Pony const &);
        ~Pony();

        void    doMagic(std::string const & target);
        void    run(int distance); // different function which will replace
                                   // the Animal's method

};

class Leg
{
    std::string kind;
};

class Quadruped
{
    private: // only accessible from Quadruped

        std::string name;

    protected: // accessible from Quadruped and Dog

        Leg         legs[4];

    public: // accessible from anywhere

        void        run();    
};

class Dog :public Quadruped // can access legs and run
{
};

int main(void) // can access only run
{
}


// DIAMOND IHERITANCE

/*

    It's when a class inherits from two classes which both share the same base
    class. As a resullt the derived class gets ultiple copies of the base class
    members, which lleads to ambiguity about which one to use.

    The solution is to use virtual inheritance, so only a single copy of the
    base class is shared.

*/
