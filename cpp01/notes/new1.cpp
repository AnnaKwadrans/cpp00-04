#include <iostream>
#include <string>

class   Student
{
        private:

        std::string _login;

        public:

        Student(std::string login) : _login(login)
        {
                std::cout << "Strudent " << this->_login << " is born." << std::endl;
        }
        ~Student(void)
        {
                std::cout << "Strudent " << this->_login << " died." << std::endl;

        }
};

int     main(void)
{
        Student bob = Student("bfbar");
        Student *jim = new Student("jfbar");

        delete jim;
        return (0);
}