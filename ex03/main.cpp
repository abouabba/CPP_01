#include "Weapon.hpp"
// #include "HumanA.hpp"
// #include "HumanB.hpp"

int main()
{
    Weapon *W = new Weapon("Sword");
    std::cout << W->getType() << std::endl;
    delete W; // free memory
    return 0;
}
