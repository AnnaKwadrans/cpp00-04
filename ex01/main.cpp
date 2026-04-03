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
        printAllIdeas(animals[i]->getBrain());
}

for (int i = 0; i < SIZE; i++)
        delete animals[i];

std::cout << std::endl << "*** COPY CONSTRUCTORS ***" << std::endl << std::endl;

const Cat*      cat1 = new Cat;
setAllIdeas(cat1->getBrain(), "idea");
printAllIdeas(cat1->getBrain());
const Cat*      cat2 = new Cat(*cat1);
printAllIdeas(cat2->getBrain());
delete cat1;
delete cat2;

const Dog*      dog1 = new Dog;
setAllIdeas(dog1->getBrain(), "idea");
printAllIdeas(dog1->getBrain());
const Dog*      dog2 = new Dog(*dog1);
printAllIdeas(dog2->getBrain());
delete dog1;
delete dog2;

/*
const Animal* j = new Dog();
const Animal* i = new Cat();

setAllIdeas(i->getBrain(), "mysl");
printAllIdeas(i->getBrain());

const Animal* j = new Cat;

printAllIdeas(j->getBrain());

setAllIdeas(i->getBrain(), "idea");
printAllIdeas(i->getBrain());
printAllIdeas(j->getBrain());

std::cout << &i->getBrain() << " " << &j->getBrain() << std::endl;
*/


/*
const Animal *catArray[SIZE];
const Animal *dogArray[SIZE];

for (int i = 0; i < SIZE; i++)
        catArray[i] = new Cat();

for (int i = 0; i < SIZE; i++)
        dogArray[i] = new Dog();

for (int i = 0; i < SIZE; i++)
        delete catArray[i];

for (int i = 0; i < SIZE; i++)
        delete dogArray[i];
*/


//delete j;//should not create a leak
//delete i;
//delete j;

return 0;
}

/*
int main()
{

const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
//...
delete meta;
delete j;
delete i;



return 0;
}

*/
