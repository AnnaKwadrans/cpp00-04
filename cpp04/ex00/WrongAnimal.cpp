#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
        std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const & type) : type(type) {
        std::cout << "WrongAnimal: Parametrized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy) {
        std::cout << "WrongAnimal: Copy constructor called" << std::endl;
        *this = cpy;
}

WrongAnimal::~WrongAnimal() {
        std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal &        WrongAnimal::operator=(WrongAnimal const & src) {
        std::cout << "WrongAnimal: Assign operator called" << std::endl;
        if (this != &src)
                this->type = src.type;
        return (*this);
}

void    WrongAnimal::makeSound(void) const {
        std::cout << "WrongAnimal makes a sound" << std::endl;
}

std::string     WrongAnimal::getType(void) const {
        return (this->type);
}
