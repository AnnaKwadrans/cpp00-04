#include <iostream>
#include "10Sample.class.hpp"

int main(void)
{
    Sample inst1(10);
    Sample inst2(42);
    Sample inst3(-8);

    std::cout << inst1.compare(&inst2) << std::endl;
    std::cout << inst2.compare(&inst3) << std::endl;

    return (0);
}

// ver addresses