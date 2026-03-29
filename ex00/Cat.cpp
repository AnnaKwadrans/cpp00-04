#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
        std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(Cat const & cpy) : Animal(cpy) {
        std::cout << "Cat: Copy constructor called" << std::endl;
        *this = cpy;
}

Cat::~Cat() {
        std::cout << "Cat: Destructor called" << std::endl;
}

Cat &   Cat::operator=(Cat const & src) {
        std::cout << "Cat: Assign operator called" << std::endl;
        if (this != &src)
                //this->type = src.type;
                Animal::operator=(src);
        return (*this);
}

void    Cat::makeSound(void) const {
        std::cout << "Meow!" << std::endl;
}
