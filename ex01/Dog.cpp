#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain) {
        std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(Dog const & cpy) : Animal(cpy), _brain(new Brain) {
        std::cout << "Dog: Copy constructor called" << std::endl;
        *this = cpy;
}

Dog::~Dog() {
        std::cout << "Dog: Destructor called" << std::endl;
        delete _brain;
}

Dog &   Dog::operator=(Dog const & src) {
        std::cout << "Dog: Assign operator called" << std::endl;
        if (this != &src)
                //this->type = src.type;
                Animal::operator=(src);
        return (*this);
}

void    Dog::makeSound(void) const {
        std::cout << "Woof!" << std::endl;
}

Brain &         Dog::getBrain(void) const {
        return (*this->_brain);
}
