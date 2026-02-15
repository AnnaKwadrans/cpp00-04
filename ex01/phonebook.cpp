#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
        std::cout << "Phonebook: Constructor called" << std::endl;
        _count = 0;
        return ;
}

Phonebook::~Phonebook(void)
{
        std::cout << "Phonebook: Destructor called" << std::endl;
        return ;
}

void    Phonebook::add(void)
{
        std::string     input;
        Contact         new_contact;
        
        std::cout << "ADD called" << std::endl;
        
        std::cout << "First name: ";
        std::cin >> input;
        new_contact.set_first_name(input);
        std::cout << "Last name: ";
        std::cin >> input;
        new_contact.set_last_name(input);
        std::cout << "Nickname: ";
        std::cin >> input;
        new_contact.set_nickname(input);
        std::cout << "Phone number: ";
        std::cin >> input;
        new_contact.set_phone_number(input);
        std::cout << "Darkest secret: ";
        std::cin >> input;
        new_contact.set_darkest_secret(input);

        _contacts[_count % 8] = new_contact;
        _count++;
        return ;
}

void    Phonebook::search(void) const
{
        std::string     input;
        int             id;
        
        std::cout << "SEARCH called" << std::endl;

        std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
        std::cout << "----------|----------|----------|----------" << std::endl;

        for (int i = 0; i < 8; i++)
        {
                std::cout << "         " << (i + 1) << "|";
                display_field(_contacts[i].get_first_name());
                std::cout << "|"; 
                display_field(_contacts[i].get_last_name());
                std::cout << "|";
                display_field(_contacts[i].get_nickname());
                std::cout << std::endl;
        }
        id = 0;
        while (id < 1 || id > 8)
        {
                std::cout << "Choose index (1-8): ";
                std::cin >> input;
                if (!isdigit(input[0]))
                        continue ;
                id = stoi(input);
        }
        std::cout << "First name: " << _contacts[id - 1].get_first_name() << std::endl
                << "Last name: " << _contacts[id - 1].get_last_name() << std::endl
                << "Nickname: " << _contacts[id - 1].get_nickname() << std::endl
                << "Phone number: " << _contacts[id - 1].get_phone_number() << std::endl
                << "Darkest secret: " << _contacts[id - 1].get_darkest_secret() << std::endl;
        return ;
}

void     Phonebook::display_field(std::string field) const
{
        if (field.length() > 10)
                field = field.substr(0, 8) + ".";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << field;
        return ;
}
