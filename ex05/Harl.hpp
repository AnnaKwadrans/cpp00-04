#ifndef HARL_H
# define HARL_H

# include <string>
# include <iostream>

enum    Level
{
        DEBUG,
        INFO,
        WARNING,
        ERROR,
        INVALID
};

class Harl
{
        private:

                void    _debug( void );
                void    _info( void );
                void    _warning( void );
                void    _error( void );
        public:

                Harl(/* args */);
                ~Harl();

                void            complain( std::string level );
                static Level    get_lvl(std::string level);
        
};

#endif
