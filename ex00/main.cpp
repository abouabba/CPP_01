#include "Zombie.hpp"

int main() {
	Zombie *name = newZombie("Negan");
	name->announce();
	randomChump("Lucille");
	delete name;
}