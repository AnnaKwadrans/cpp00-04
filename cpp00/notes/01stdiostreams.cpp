#include <iostream>

int main(void)
{
    char    buff[25];

    std::cout << "Hello world\n" << std::endl;
    std::cout << "Input >> ";
    std::cin >> buff;
    std::cout << buff <<std::endl;
    return (0);
}
