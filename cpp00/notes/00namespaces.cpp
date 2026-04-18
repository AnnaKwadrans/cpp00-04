//
// std::
//
#include <stdio.h>

int gl_var = 1;
int f(void) {return (2);}

namespace   Hola {
    int gl_var = 3;
    int f(void) {return (4);}
}

namespace Hello {
    int gl_var = 5;
    int f(void) {return (6);}
}

namespace Alias = Hello;

int main(void)
{
    printf("%d %d\n", gl_var, f());
    printf("%d %d\n", Hola::gl_var, Hola::f());
    printf("%d %d\n", Hello::gl_var, Hello::f());
    printf("%d %d\n", Alias::gl_var, Alias::f());
    printf("%d %d\n", ::gl_var, ::f());
    return (0);
}
