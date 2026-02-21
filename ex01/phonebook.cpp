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
        std::string     input;

        input = get_input("First name: ");
        new_contact.set_first_name(input);

        input = get_input("Last name: ");
        new_contact.set_last_name(input);

        input = get_input("Nickname: ");
        new_contact.set_nickname(input);

        input.clear();
        while (!valid_phone_nb(input))
                input = get_input("Phone number: ");
        new_contact.set_phone_number(input);

        input = get_input("Darkest secret: ");
        new_contact.set_darkest_secret(input);

        new_contact.set_not_empty();
        _contacts[_count % 8] = new_contact;
        _count++;
        return ;
}

int    PhoneBook::valid_phone_nb(std::string nb)
{
        if (nb.empty())
                return (0);
        for (int i = 0; nb[i]; i++)
        {
                if (!std::isdigit(static_cast<unsigned char>(nb[i])))
                {
                        std::cout << "Invalid number" << std::endl;
                        return (0);
                }
        }
        return (1);
}

std::string    PhoneBook::get_input(std::string prompt)
{
        std::string     input;

        while (input.empty())
        {
                std::cout << prompt;
                if (!getline(std::cin, input))
                {
                        std::cout << std::endl << "Error while getting input" << std::endl;
                        exit(1);
                }
        }
        return (input);
}
