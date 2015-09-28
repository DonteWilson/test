#include "Zombie.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
/*void Print(Zombie Stats)
{
	
}
void Changehp(Zombie za)
{
	int c;
	cin >> c;
	za.chp = c;
}
void Health(Zombie za)
{
	cout << za.chp << endl;
}*/
int main()
{
	int choice;
	int hp, m_hp,evil, init, dmg, def, m_def, hurt, m_hurt;
	dmg = 15;
	def = 5;
	evil = 4;

	srand((unsigned)time(0));
	init = rand() % 2 + 1;
	m_hp = rand() % 50 + 60;
	hp = rand() % 20 + 80;
	cout << "You : I SHALL BE THE LAST ZOMBIE STANDING\n";
	cout << "Enemy:ARGHHHSHSGHHGGHS FIGHT ME\n";

	while (hp > 0 || m_hp > 0) {
		cout <<"What will you do?\n1.Punch\n2.Kick\n3.Bite\n";
		do { cin >> choice; } 
	while (choice > 3 || choice < 1);
		switch (choice) {
		case 1:
			dmg = rand() % 15 + 10;
			def = rand() % 10 + 10;
			cout << "FALCCCCOOONNNNNNN PUNCCCCHHHHHHH" << endl;
			break;
		case 2:
			dmg = rand() % 20 + 10;
			def = rand() % 11 + 11;
			cout << "ROUND HOUSE KICK" << endl;
			break;
		case 3:
			dmg = rand() % 10 + 5;
			def = rand() % 12 + 12;
			cout << "CHOPPCHOPCHOP"<< endl;
			break;
			
		
		default:
		{
			cout << "Invalid Move" << endl;
			cin >> choice;
			break;
		}

		}
		m_hurt = (dmg -evil) - (def / dmg);
		if (m_hurt < 0) {
			m_hurt = 0;
		}
		m_hp = m_hp - m_hurt;
		cout << "You hit: " << m_hurt << " on enemy zombie\n";
		cin.get();
		if (m_hp < 1)
		{   
			system("cls");
			cout << "\nYou have successfully killed the zombie\n";
			cout<<"Your Current hp is: " << hp << "\n";
			cout << "???: ARGHHH You killed my Friend!" << endl;
			m_hp = m_hp - m_hurt;
			m_hp = 100;
			
			
		}
		else
		{
			
				
		}
			

		
				
		}




	}
    

