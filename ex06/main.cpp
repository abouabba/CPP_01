#include "Harl.hpp"

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptrfuncs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int idx = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            idx = i;
            break;
        }
    }

    switch (idx)
    {
        case 0: case 1: case 2: case 3:
        for (int i = idx; i < 4; i++)
        {
            (this->*ptrfuncs[i])();
        }
        break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}


int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return 1;
    }
    Harl harl;
    harl.complain(argv[1]);
    return 0;
}