#include "Animal.hpp"

Animal::Animal(void) {
        std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string const & type) : type(type) {
        std::cout << "Animal: Parametrized constructor called" << std::endl;
}

Animal::Animal(Animal const & cpy) {
        std::cout << "Animal: Copy constructor called" << std::endl;
        *this = cpy;
}

Animal::~Animal() {
        std::cout << "Animal: Destructor called" << std::endl;
}

Animal &        Animal::operator=(Animal const & src) {
        std::cout << "Animal: Assign operator called" << std::endl;
        if (this != &src)
               this->type = src.type;
        return (*this);
}

void    Animal::makeSound(void) const {
        std::cout << "Animal makes a sound" << std::endl;
}

std::string     Animal::getType(void) const {
        return (this->type);
}
