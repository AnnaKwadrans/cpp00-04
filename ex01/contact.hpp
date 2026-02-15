#ifndef CONTACT_H
# define CONTACT_H

# include <string>
# include <iostream>

class Contact
{
        private:

        std::string     _first_name;
        std::string     _last_name; 
        std::string     _nickname;
        std::string     _phone_number;
        std::string     _darkest_secret;

        public:

        Contact(void);
        ~Contact(void);

        //setters
        void    set_first_name(std::string input);
        void    set_last_name(std::string input);
        void    set_nickname(std::string input);
        void    set_phone_number(std::string input);
        void    set_darkest_secret(std::string input);

        //getters
        std::string     get_first_name(void) const;
        std::string     get_last_name(void) const;
        std::string     get_nickname(void) const;
        std::string     get_phone_number(void) const;
        std::string     get_darkest_secret(void) const;

};

#endif