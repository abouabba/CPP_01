#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *Moar = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Moar[i].setname(name);
    }
    return Moar;
}