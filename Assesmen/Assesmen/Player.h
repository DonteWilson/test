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
	Player();
	~Player();

	int GetPosX();  //position x
	int GetPosY();  //position y

	void SetPos(int a_px,int a_py); //sets position  for player
	bool Shoot(); //enables player to shoot
	void Move();  
	void Start();
	void Satchel();
	void fWife(int &a_rfX, int &a_rfY);
	bool Victory();
	
	//private data set for Player
private:

	int m_x;
	int m_y;

};

#endif PLAYER_H


