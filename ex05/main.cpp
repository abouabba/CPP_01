#include "Harl.hpp"

Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN");
    return 0;
}