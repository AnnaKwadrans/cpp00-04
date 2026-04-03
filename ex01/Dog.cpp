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
        {
                std::cout << "Copyting a dog..." << std::endl;
                Animal::operator=(src);
                *this->_brain = *src._brain;
        }

                
        return (*this);
}

void    Dog::makeSound(void) const {
        std::cout << "Woof!" << std::endl;
}

Brain &         Dog::getBrain(void) const {
        return (*this->_brain);
}

std::ostream&   operator<<(std::ostream& os, Dog const & src) {
        os << src.getType() << std::endl;
        Brain& srcBrain = src.getBrain();
        for (int i = 0; i < N_IDEAS; i++)
        {
                os << srcBrain.getIdea(i);
                if (i != N_IDEAS - 1)
                        os << " | ";
        }
        os << std::endl << std::endl;;
        return (os);
}
