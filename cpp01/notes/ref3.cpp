#include <iostream>
#include <string>

class Student
{
    private:

        std::string _login;

    public:

        Student(std::string const & login) : _login(login) {}

        std::string&        getLoginRef()
        {
            return (this->_login);
        }

        std::string const & getLoginRefConst() const
        {
            return (this->_login);
        }

        std::string*        getLoginPtr()
        {
            return (&(this->_login));
        }

        std::string const * getLoginPtrConst() const
        {
            return (&(this->_login));
        }

};

int main(void)
{
    Student         bob = Student("bfubar");
    Student const   jim = Student("jfubar");

    std::cout << *bob.getLoginPtrConst() << std::endl;
    std::cout << bob.getLoginRefConst() << std::endl;

    std::cout << *jim.getLoginPtrConst() << std::endl;
    std::cout << jim.getLoginRefConst() << std::endl;

    *bob.getLoginPtr() = "bobsnewlogin";
    std::cout << *bob.getLoginPtrConst() << " " << bob.getLoginRefConst() << std::endl;

    bob.getLoginRef() = "bnl";
    std::cout << *bob.getLoginPtrConst() << " " << bob.getLoginRefConst() << std::endl;

    // NO SE PUEDE PQ ES CONST
    
    //*jim.getLoginPtr() = "bobsnewlogin";
    //std::cout << *jim.getLoginPtrConst() << " " << jim.getLoginRefConst() << std::endl;

    //jim.getLoginRef() = "bnl";
    //std::cout << *jim.getLoginPtrConst() << " " << jim.getLoginRefConst() << std::endl; 
    
    return (0);
}
