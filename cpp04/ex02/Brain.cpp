#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain: default constructor called" << std::endl;
    setAllIdeas(*this, "empty");
}

Brain::Brain(Brain const & cpy) {
    std::cout << "Brain: copy constructor called" << std::endl;
    *this = cpy;
}

Brain::~Brain() {
    std::cout << "Brain: destructor called" << std::endl;
}

Brain&      Brain::operator=(Brain const & src) {
    if (this != &src)
    {
        for (int i = 0; i < N_IDEAS; i++)
            this->_ideas[i] = src.getIdea(i);
    }
    return (*this);
}

std::string Brain::getIdea(int i) const {
    if (i < 0 || i >= N_IDEAS)
    {
        std::cout << "Idea's index out of scope" << std::endl;
        return (NULL);
    }
    return (this->_ideas[i]);
}

void        Brain::setIdea(int i, std::string const & idea) {
    if (i < 0 || i >= N_IDEAS)
        std::cout << "Idea's index out of scope" << std::endl;
    this->_ideas[i] = idea;
}

void    setAllIdeas(Brain & brain, std::string idea) {
    for (int i = 0; i < N_IDEAS; i++)
    {
        std::stringstream ss;
        ss << i + 1;
        std::string newIdea = idea + " " + ss.str();
        brain.setIdea(i, newIdea);
    }
}

void    printAllIdeas(Brain const & brain) {
    for (int i = 0; i < N_IDEAS; i++)
    {
        std::cout << brain.getIdea(i);
        if (i != N_IDEAS - 1)
            std::cout << " | ";
    }
    std::cout << std::endl << std::endl;;
}
