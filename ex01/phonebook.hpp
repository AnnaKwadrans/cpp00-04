#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include <sstream>
# include <cstdlib>
# include "contact.hpp"

class PhoneBook
{
        private:

        Contact         _contacts[8];
        int             _count;

        void    display_contacts(void) const;
        void    display_field(std::string field, int end_with_bar) const;
        void    prompt_for_index();
        void    show_contact(int id) const;
        int     valid_phone_nb(std::string nb) const;
        void    get_input(std::string prompt);

        public:

        std::string     input;
        int             id;

        PhoneBook(void);
        ~PhoneBook(void);

        void            add(void);
        void            search(void);
};

#endif
