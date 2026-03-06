#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class   Zombie
{
        std::string     _name;

        public:

        Zombie(void);
        ~Zombie(void);

        void    set_name(std::string name);
        void    announce(void) const;

};

Zombie* zombieHorde( int N, std::string name );


#endif
