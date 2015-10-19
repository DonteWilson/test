/*
Students create a top-down shooter retro style 2D game, demonstrating the ability to design,
plan and build a simple game, create and code “bug and error free” program and demonstrate an
understanding of C++ programming constructs, classes, functions and data structures.
*/
////////////////////////////////////////////////
//Donte Wilson
//9/29/15
//ADGP 105: Retro Game {110 hours}
////////////////////////////////////////////////
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "Map.h"
using namespace std;
//class resembling player
class Player
{
	//public data set for Player
public:
	//Constructor for Player
	Player();
	//Destructor for Player
	~Player();

	int GetPosX();  //position x
	int GetPosY();  //position y

	void SetPos(int a_px,int a_py); //sets position  for player
	bool Shoot(); //enables player to shoot
	void Move(); //enables movement for the player 
	void Start(); //Function that starts the game for the player
	void Satchel(); //enables the player to have an inventory.
	void fWife(int &a_rfX, int &a_rfY);
	bool Victory(); //Decides if the player has successfully obtained the objective and brought it back safely.
	
	//private data set for Player
private:
	//private variable for m_x
	int m_x;
	//private variable for m_y
	int m_y;

};

#endif PLAYER_H


