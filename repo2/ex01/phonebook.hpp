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

        static std::string     get_input(std::string prompt);
        static int             valid_phone_nb(std::string nb);

        void                   display_contacts(void) const;
        static void            display_field(std::string field, int end_with_bar);
        static int             prompt_for_index();
        void                   show_contact(int id) const;

        public:

        //std::string     input;
        //int             id;

        PhoneBook(void);
        ~PhoneBook(void);

        void            add(void);
        void            search(void) const;
};

#endif
