#include <iostream>
#include <string>
using namespace std;
struct velocity
{
	float size;
	float direction;
};
struct position
{
	float x;
	float y;
};
struct Player
{
	string name;
	int health;
	int mana;
	position p;
	velocity v;
};



void main()
{
	Player rivyn;
	rivyn.health = 100;
	rivyn.mana = 100; 

	if (rivyn.health = 100)
	{
		cout << " Rivyns stats" << endl;
		cout << "Current Hp :" << rivyn.health << endl;
		cout << "Current Mana :" << rivyn.mana << endl;
	}
	

	position origin = {};
	position playerPosition = { 4.2f,8.25f };
	velocity playerVelocity = { 3.0f, 5.25f };


	rivyn.p = playerPosition;
	rivyn.v = playerVelocity;
	

	system("pause");



}


