#include <iostream>
#include "09Sample.class.hpp"

int main(void)
{
    Sample instance;

    instance.setfoo(10);
    std::cout << "foo value: " << instance.getfoo() << std::endl;

    return (0);
}
