#include "phonebook.hpp"

void    PhoneBook::search(void) const
{
        int     id;
        
        if (_count == 0)
        {
                std::cout << "No saved contacts" << std::endl;
                return ;
        }
        display_contacts();
        id = prompt_for_index();
        show_contact(id);       
        return ;
}

void    PhoneBook::display_contacts(void) const
{
        std::cout << "     Index|First name| Last name|  Nickname" << std::endl
        << "----------|----------|----------|----------" << std::endl;

        //display_field("Index", 1);
        //display_field("First name", 1);
        //display_field("Last name", 1);
        //display_field("Nickname", 0);
        for (int i = 0; ((i < 8) && !(_contacts[i].is_empty())); i++)
        {
                //std::cout << "         " << (i + 1) << "|";
                std::stringstream ss;
                ss << i + 1;
                display_field(ss.str(), 1);
                display_field(_contacts[i].get_first_name(), 1);
                //std::cout << "|"; 
                display_field(_contacts[i].get_last_name(), 1);
                //std::cout << "|";
                display_field(_contacts[i].get_nickname(), 0);
                //std::cout << std::endl;
        }
}

void     PhoneBook::display_field(std::string field, int end_with_bar)
{
        if (field.length() > 10)
                field = field.substr(0, 8) + ".";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << field;
        if (end_with_bar)
                std::cout << "|";
        else
                std::cout << std::endl;
        return ;
}

int     PhoneBook::prompt_for_index()
{
        //std::stringstream       ss;
        std::string     input;
        int             id;

        id = 0;
        while (id < 1 || id > 8)
        {
                input.clear();
                std::cout << "Choose index (1-8): ";
                if (!getline(std::cin, input))
                {
                        std::cout << std::endl << "Error while getting input" << std::endl;
                        exit(1);
                }
                if (input.empty() || input.length() != 1 || !isdigit(static_cast<unsigned char>(input[0])))
                {
                        std::cout << "Introduce one digit" << std::endl;
                        continue ;
                }
                //ss << input;
                //ss >> id;
                //ss.clear();
                
                //id = input[0];

                std::stringstream ss(input);
                ss >> id;
        }
        return (id);
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
