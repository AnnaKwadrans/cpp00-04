#ifndef BRAIN_H
# define BRAIN_H
# define N_IDEAS 100

# include <string>
# include <iostream>
# include <sstream>

class Brain
{
    private:
        std::string _ideas[N_IDEAS];

    public:

        Brain(void);
        Brain(Brain const & cpy);
        ~Brain();

        Brain&      operator=(Brain const & src);
        std::string getIdea(int i) const;
        void        setIdea(int i, std::string const & idea);

};

void    setAllIdeas(Brain & brain, std::string idea);
void    printAllIdeas(Brain const & brain);

#endif
