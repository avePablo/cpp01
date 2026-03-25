#include "zombie.hpp"

int main()
{
    Zombie* z = newZombie("HeapZombie");
    z->announce();
    delete z;

    randomChump("StackZombie");
}