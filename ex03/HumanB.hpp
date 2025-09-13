#pragma once

#include <iostream>

class HumanB {
    private:
        std::string name;
        std::string weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void setweapon(std::string name);
        std::string getweapon(const std::string);
};
