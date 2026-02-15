#include <iostream>
#include <cctype>
#include <cstdio>

void    print_arg(char *str)
{
    for (int i = 0; str[i]; i++)
        std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
}

int	main(int argc, char** argv)
{
    int     i;
    
    if (argc > 1)
    {
        i = 1;
        while (i < argc)
        {
            print_arg(argv[i]);
            if (i < (argc - 1))
                std::cout << " ";
            i++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
    return (0);
}
