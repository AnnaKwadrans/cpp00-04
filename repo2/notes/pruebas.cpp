#include <iostream>
/*
namespace hola
{
    void f() 
    {
        std::cout << "hola" << std::endl;
    }
}

namespace hello
{
    void f()
    {
        std::cout << "hello" << std::endl;
    }
}

using namespace hello;

int main()
{
    hola::f();
    f();
    return (0);
}
*/
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    std::string myString;  // Attribute (string variable)
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  std::cout << myObj.myNum << "\n";
  std::cout << myObj.myString;
  return 0;
}
