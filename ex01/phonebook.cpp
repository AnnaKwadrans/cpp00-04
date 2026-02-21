#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
        _count = 0;
        return ;
}

PhoneBook::~PhoneBook(void)
{
        return ;
}

void    PhoneBook::add(void)
{
        Contact         new_contact;

        input.clear();
        while (input.empty())
        {
                std::cout << "First name: ";
                getline(std::cin, input);
                new_contact.set_first_name(input);
        }
        input.clear();
        while (input.empty())
        {
                std::cout << "Last name: ";
                getline(std::cin, input);
                new_contact.set_last_name(input);
        }
        input.clear();
        while (input.empty())
        {
                std::cout << "Nickname: ";
                getline(std::cin, input);
                new_contact.set_nickname(input);
        }
        input.clear();
        while (input.empty())
        {
                std::cout << "Phone number: ";
                getline(std::cin, input);
                if (!valid_phone_nb(input))
                {
                        std::cout << "Invalid number" << std::endl;
                        input.clear();
                        continue ;
                }
                new_contact.set_phone_number(input);
        }
        input.clear();
        while (input.empty())
        {
                std::cout << "Darkest secret: ";
                getline(std::cin, input);
                new_contact.set_darkest_secret(input);
        }

        new_contact.set_not_empty();
        _contacts[_count % 8] = new_contact;
        _count++;
        return ;
}

int    PhoneBook::valid_phone_nb(std::string nb) const
{
        for (int i = 0; nb[i]; i++)
        {
                if (!std::isdigit(nb[i]))
                        return (0);
        }
        return (1);
}

void    PhoneBook::search(void)
{
        if (_count == 0)
        {
                std::cout << "No saved contacts" << std::endl;
                return ;
        }
        display_contacts();
        prompt_for_index();
        show_contact(id);       
        return ;
}

void    PhoneBook::display_contacts(void) const
{
        std::cout << "     Index|First name| Last name|  Nickname" << std::endl;
        std::cout << "----------|----------|----------|----------" << std::endl;

        for (int i = 0; ((i < 8) && !(_contacts[i].is_empty())); i++)
        {
                std::cout << "         " << (i + 1) << "|";
                display_field(_contacts[i].get_first_name());
                std::cout << "|"; 
                display_field(_contacts[i].get_last_name());
                std::cout << "|";
                display_field(_contacts[i].get_nickname());
                std::cout << std::endl;
        }
}

void     PhoneBook::display_field(std::string field) const
{
        if (field.length() > 10)
                field = field.substr(0, 8) + ".";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << field;
        return ;
}

void    PhoneBook::prompt_for_index()
{
        std::stringstream       ss;

        id = 0;
        while (id < 1 || id > 8)
        {
                input.clear();
                std::cout << "Choose index (1-8): ";
                getline(std::cin, input);
                if (input.empty() || input.length() != 1 || !isdigit(input[0]))
                {
                        std::cout << "Introduce one digit" << std::endl;
                        continue ;
                }
                ss << input;
                ss >> id;
        }

}

void    PhoneBook::show_contact(int id) const
{
        if (_contacts[id - 1].is_empty())
                std::cout << "There is no contact with the chosen index" << std::endl;
        else
        {
                std::cout << "First name: " << _contacts[id - 1].get_first_name() << std::endl
                        << "Last name: " << _contacts[id - 1].get_last_name() << std::endl
                        << "Nickname: " << _contacts[id - 1].get_nickname() << std::endl
                        << "Phone number: " << _contacts[id - 1].get_phone_number() << std::endl
                        << "Darkest secret: " << _contacts[id - 1].get_darkest_secret() << std::endl;
        }       
}
