#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void    Harl::_debug( void )
{
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
        return ;
}

void    Harl::_info( void )
{
        std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
        return ;
}

void    Harl::_warning( void )
{
        std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
        return ;
}

void    Harl::_error( void )
{
        std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
        return ;
}

void    Harl::complain( std::string level )
{
        void    (Harl::*fptr)(void);
        Level   lvl = get_lvl(level);

        switch (lvl)
        {
                case DEBUG:
                        fptr = &Harl::_debug;
                        break;
                case INFO:
                        fptr = &Harl::_info;
                        break;
                case WARNING:
                        fptr = &Harl::_warning;
                        break;
                case ERROR:
                        fptr = &Harl::_error;
                        break;
                case INVALID:
                        std::cout << "Err: Invalid level" << std::endl;
                        return;
        }
        (this->*fptr)();
        return ;
}

Level   Harl::get_lvl(std::string level)
{
        if (level == "DEBUG")
                return (DEBUG);
        else if (level == "INFO")
                return (INFO);
        else if (level == "WARNING")
                return (WARNING);
        else if (level == "ERROR")
                return (ERROR);
        else
                return (INVALID);
}
