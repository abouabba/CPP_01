#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie *Negan = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Negan[i].setname(name);
    }
    return Negan;
}
