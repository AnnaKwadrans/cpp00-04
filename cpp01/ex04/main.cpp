#include <fstream>
#include <iostream>

std::string     replace(std::string buffer, std::string s1, std::string s2)
{
        std::string     replaced;
        std::string     aux;
        int             first_occurence = 1;

        if (s1.empty())
                return (buffer);
        size_t     r_id = buffer.find(s1);
        if (r_id == std::string::npos)
                return (buffer);

        while (r_id != std::string::npos)
        {
                if (first_occurence)
                {
                        aux = buffer;
                        first_occurence = 0;
                }
                replaced = aux.substr(0, r_id);
                replaced += s2;
                replaced += aux.substr(r_id + s1.length());
                aux = replaced;
                r_id = aux.find(s1);
        }
        return (replaced);

}

int     main(int argc, char** argv)
{
        if (argc != 4)
        {
                std::cout << "incorrect args" << std::endl;
                return (1);
        }
        
        std::string     filename1 = argv[1];
        std::string     filename2 = filename1 + ".replace";
        std::string     s1 = argv[2];
        std::string     s2 = argv[3];
        std::string     buffer;
        std::string     replaced;

        std::ifstream   ifs(filename1);
        std::ofstream   ofs(filename2);

        if (!ifs.is_open() || !ofs.is_open())
        {
                std::cout << "err open file" << std::endl;
                return (1);
        }

        while (getline(ifs, buffer))
        {
                replaced = replace(buffer, s1, s2);
                ofs << replaced;
                if (!ifs.eof())
                        ofs << std::endl;
        }

        ifs.close();
        ofs.close();

        return (0);
}
