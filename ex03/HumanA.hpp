#pragma once
#include "Weapon.hpp"
#include <iostream>

class HumanA {
    public:
        HumanA(std::string name, Weapon& ewapon);
        void attack();
    private:
        std::string name;
        Weapon& weapon;
};
