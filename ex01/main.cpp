#include "phonebook.hpp"

int     main(void)
{
        Phonebook       phonebook;
        std::string     cmd;

        while (1)
        {
                std::cout << "Enter a command: ";
                std::cin >> cmd;
                if (cmd == "ADD")
                        phonebook.add();
                else if (cmd == "SEARCH")
                        phonebook.search();
                else if (cmd == "EXIT")
                        break ;
                else
                        std::cout << "Valid commands: ADD / SEARCH / EXIT" << std::endl;
        }
        return (0);
}
