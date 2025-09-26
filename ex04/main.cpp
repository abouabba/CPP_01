#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    if (argv[1][0] == '\0' || argv[2][0] == '\0')
    {
        std::cout << "Error: empty string" << std::endl;
        return 1;
    }
    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }
    std::string content;
    std::string line;
    while (std::getline(file, line))
        content += line + "\n";
    int pos = 0;
    while ((pos = content.find(argv[2], pos)) != std::string::npos)
    {
        content.erase(pos, std::string(argv[2]).length());
        content.insert(pos, argv[3]);
        // pos += std::string(argv[3]).length();
    }
    std::ofstream file_out(std::string(argv[1]) + ".replace");
    if (!file_out.is_open())
    {
        std::cout << "Error: could not create file" << std::endl;
        return 1;
    }
    file_out << content;
    file_out << "ana howa l7away dyalk  ." << std::endl;
    file_out.close();
    file.close();
    
    return 0;
}
