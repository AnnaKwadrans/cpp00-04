#include "contact.hpp"

Contact::Contact(void)
{
        std::cout << "Contact: Constructor called" << std::endl;
        return ;
}

Contact::~Contact(void)
{
        std::cout << "Contact: Destructor called" << std::endl;
        return ;
}

void    Contact::set_first_name(std::string input)
{
        _first_name = input;
        return ;
}
void    Contact::set_last_name(std::string input)
{
        _last_name = input;
        return ;
}

void    Contact::set_nickname(std::string input)
{
        _nickname = input;
        return ;
}

void    Contact::set_phone_number(std::string input)
{
        _phone_number = input;
        return ;
}

void    Contact::set_darkest_secret(std::string input)
{
        _darkest_secret = input;
        return ;
}

std::string     Contact::get_first_name(void) const
{
        return (_first_name);
}

std::string     Contact::get_last_name(void) const
{
        return (_last_name);
}

std::string     Contact::get_nickname(void) const
{
        return (_nickname);
}

std::string     Contact::get_phone_number(void) const
{
        return (_phone_number);
}

std::string     Contact::get_darkest_secret(void) const
{
        return (_darkest_secret);
}
