#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iomanip>
# include "contact.hpp"

class Phonebook
{
        private:

        Contact         _contacts[8];
        int             _count;

        void     display_field(std::string field) const;

        public:

        Phonebook(void);
        ~Phonebook(void);

        void            add(void);
        void            search(void) const;


};

#endif