#include "Sample1.class.hpp"
#include "Sample2.class.hpp"

int main(void)
{
    Sample1 inst('a', 3, 5.18);
    Sample1 inst2('h', 65, 7675.83598832);

    Sample2 ex1('a', 3, 5.18);
    Sample2 ex2('h', 65, 7675.83598832); 
    return (0);
}
