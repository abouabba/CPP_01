#pragma once
#include "Weapon.hpp"
#include <iostream>

struct HumanA {
    public:
        HumanA(std::string name, Weapon& ewapon);
        void attack();
    private:
        std::string name;
        Weapon& weapon;
};
