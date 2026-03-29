#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Cat") {
        std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & cpy) : WrongAnimal(cpy) {
        std::cout << "WrongCat: Copy constructor called" << std::endl;
        *this = cpy;
}

WrongCat::~WrongCat() {
        std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat &   WrongCat::operator=(WrongCat const & src) {
        std::cout << "WrongCat: Assign operator called" << std::endl;
        if (this != &src)
                //this->type = src.type;
                WrongAnimal::operator=(src);
        return (*this);
}

void    WrongCat::makeSound(void) const {
        std::cout << "Meow!" << std::endl;
}
