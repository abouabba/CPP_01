#include "Zombie.hpp"

int main() {
    int N = 555555555;
    Zombie *name = zombieHorde(N, "walkers");
    if (!name)
        return 1;
    for (int i = 0; i < N; i++)
        name->announce();
    delete[] name;
}