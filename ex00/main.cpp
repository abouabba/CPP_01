#include <Zombie.hpp>

int main() {
	Zombie *name = newZombie("walker");
	name->announce();
	randomChump("abouabba");
	delete name;
}