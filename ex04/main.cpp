#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    if (argv[2][0] == '\0')
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
    if (!std::getline(file, content, '\0'))
    {
        std::cout << "the file have an error or empty" << std::endl;
        return 1;
    }
    size_t pos = 0;
    while ((pos = content.find(argv[2], pos)) != std::string::npos)
    {
        content.erase(pos, std::string(argv[2]).length());
        content.insert(pos, argv[3]);
        pos += std::string(argv[3]).length();
    }
    std::ofstream file_out((std::string(argv[1]) + ".replace").c_str());
    if (!file_out.is_open())
    {
        std::cout << "Error: could not create file" << std::endl;
        return 1;
    }
    file_out << content;
    file_out.close();
    file.close();
    return 0;
}
