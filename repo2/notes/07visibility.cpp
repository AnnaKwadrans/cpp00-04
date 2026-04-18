#include "07Sample.class.hpp"

int main(void)
{
    Sample instance;
    instance.publicbar();
    //instance._privatebar();   <- no se puede pq es private
    return (0);
}