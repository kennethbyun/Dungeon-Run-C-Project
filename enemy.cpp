#include <iostream>
#include <math.h>
#include <string>
using namespace std;
#include "enemy.h"

enemy::enemy(int r1, int e1, int r2, int e2)
{
    srand(time(NULL));
    health = rand() % r1 + e1;
    damage = rand() % r2 + e2;
}
void enemy::taken(mc* player)
{
    if (ifDefeated() == 0)
    {
        health-=(player->Attack());
    }
}
void enemy::dealt(mc* player)
{
    if (ifDefeated() == 0)
    {
        player->remove_health(damage);
    }
}
bool enemy::ifDefeated()
{
    if (health == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enemy::showStatus()
{
    cout << "Health: " << health << endl;
    cout << "Damage: " << health << endl;
}
