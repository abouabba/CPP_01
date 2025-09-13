#pragma once

#include <iostream>

class HumanA {
    private:
        std::string name;
        std::string weapon;
    public:
        HumanA(std::string name);
        ~HumanA();
        void setweapon(std::string name);
        std::string getweapon(const std::string);
};
