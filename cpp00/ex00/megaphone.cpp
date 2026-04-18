#include <iostream>
#include <cctype>
#include <cstdio>

int	main(int argc, char** argv)
{
    if (argc > 1)
    {
        for (int i = 1; argv[i]; i++)
        {
            for (int j = 0; argv[i][j]; j++)
                std::cout << static_cast<char>(std::toupper(static_cast<unsigned char>(argv[i][j])));
            if (i < (argc - 1))
                std::cout << " ";
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE NOISE *" << std::endl;
    return (0);
}
