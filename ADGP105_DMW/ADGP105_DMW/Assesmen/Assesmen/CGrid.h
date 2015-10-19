
#ifndef CGRID_H
#define CGRID_H
#include "Player.h"

using namespace std;
//creates a class for Cell
class Cell
{
//public class for player
public:
	//Constructor for Cell
	Cell();
	//Deconstructor for Cell
	~Cell();

	//Identifies current position of player
	Cell dCell(int a_px,int a_py);

	int GetPosX();
	int GetPosY();

	bool GetAlive();
	//Sets Position
	void SetPos(int a_px, int a_py);
	//Checks to see if player is alive
	void sAlive(bool a_l);
	//Checks to see the position of the landmine
	void Mine(int a_x, int a_y);
	//Checks to see position of thief and player to indicate if player survives
	void Thief(Player &a_rfplayer, int a_x, int a_y);
	//Checks to see position of Wife and indicates if player picked up wife and returned back safely.
	void Wife(Player &a_rfplayer, int a_x, int a_y);

//private class for player
private:
	//Creates a boolean to see if Player alive
	bool m_sLife;
	//Private variable in memory for x
	int m_x;
	//Private variable in memory for y
	int m_y;

};
#endif CGRID_H
