#ifndef BRAIN_H
# define BRAIN_H
# define N_IDEAS 100

# include <string>
# include <iostream>

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



#endif