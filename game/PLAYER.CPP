#include "Player.h"
#include <string>


using namespace std;

Player::Player(string n, int h)
{
    health=h;
    name=n;
}

void Player::setName(string n)
{
    name = n;
}
string Player::getName()
{
    return name;
}
void Player::setHealth(int h)
{
    health=h;
}
int Player::getHealth()
{
    return health;
}
void Player::setItem()
{

}



