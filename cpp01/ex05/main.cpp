#include "Harl.hpp"

int     main(void)
{
        Harl    harl;

                        void    _debug( void );
                void    _info( void );
                void    _warning( void );
                void    _error( void );

        std::cout << "**DEBUG MODE**" << std::endl;
        harl.complain("DEBUG");
        std::cout << "**INFO MODE**" << std::endl;
        harl.complain("INFO");
        std::cout << "**WARNING MODE**" << std::endl;
        harl.complain("WARNING");
        std::cout << "**ERROR MODE**" << std::endl;
        harl.complain("ERROR");
        std::cout << "**INVALID LEVEL**" << std::endl;
        harl.complain("hola");
        return (0);
}
