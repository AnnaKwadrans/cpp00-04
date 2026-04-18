#include <iostream>

int main()
{
    int number = 5;

    int* numPtr = &number;
    int& numRef = number;

    //int& ref2; <- nie da sie bo reference jest const i nie da sie zainicjalizowac
    //              pozniej lub zmienic na co wzkazuje

    std::cout << number << " " << numPtr << " " << *numPtr << " " << numRef << std::endl;
    
    *numPtr = 10;
    std::cout << number << std::endl;
    
    numRef = 15;
    std::cout << number << std::endl;
    
    return (0);
}
