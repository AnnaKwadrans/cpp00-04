#include <iostream>
#include <string>

class   Student
{
        private:

        std::string _login;

        public:

        Student() : _login("ldefault")
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
        Student *students = new Student[4];

        delete [] students;
        return (0);
}