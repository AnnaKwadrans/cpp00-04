#include "Sample.class.hpp"

int main(void)
{
    Sample  instance;
    instance.foo = 8;
    std::cout << "instance.foo: " << instance.foo << std::endl;
    Sample  inst2;
    std::cout << "inst2.foo: " << inst2.foo <<std::endl;
    instance.bar();
    return (0);
}
