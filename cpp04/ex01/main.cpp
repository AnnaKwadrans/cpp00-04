#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE 4

int main()
{

const Animal*   animals[SIZE];

for (int i = 0; i < SIZE; i++)
{
        if (i % 2 == 0)
                animals[i] = new Cat;
        else
                animals[i] = new Dog;
}

for (int i = 0; i < SIZE; i++)
{
        std::cout << animals[i]->getType() << std::endl;
        animals[i]->makeSound();
        //printAllIdeas(animals[i]->getBrain());
}

for (int i = 0; i < SIZE; i++)
        delete animals[i];

const Animal* a = new Animal;
a->makeSound();
delete a;

std::cout << std::endl << "*** COPY CONSTRUCTORS ***" << std::endl << std::endl;

const Cat*      cat1 = new Cat;
std::cout << *cat1;
setAllIdeas(cat1->getBrain(), "meow");
std::cout << *cat1;
const Cat*      cat2 = new Cat(*cat1);
std::cout << *cat2;
delete cat1;
delete cat2;

const Dog*      dog1 = new Dog;
std::cout << *dog1;
setAllIdeas(dog1->getBrain(), "woof");
std::cout << *dog1;
const Dog*      dog2 = new Dog(*dog1);
std::cout << *dog2;
delete dog1;
delete dog2;

return 0;
}
