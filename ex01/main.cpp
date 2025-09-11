#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie *name = zombieHorde(N, "abdessamad");
    for (int i = 0; i < N; i++)
        name->announce();
    delete[] name;
}
