#include "Zombie.hpp"

int main() {
    Zombie* heabZombie = newZombie("Heapbob");
    heabZombie->announce();
    delete heabZombie;

    randomChump("stackbob");
    return 0;
}