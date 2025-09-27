#include "Harl.hpp"

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptrfuncs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            (this->*ptrfuncs[i])();
            return;
        }
    }
    std::cout << "UNKNOWN" << std::endl;
    
    
}

int main()
{
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("BREAKING BAD");
    return 0;
}