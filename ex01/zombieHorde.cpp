#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie *Negan = new (std::nothrow)Zombie[N];
    if (!Negan)
        return NULL;
    for (int i = 0; i < N; i++)
    {
        Negan[i].setname(name);
    }
    return Negan;
}
