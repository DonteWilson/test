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
#include <cstdlib>
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
	int ammo;
	void SetPos(int a_x,int a_y); //sets position  for player
	bool Shoot(); //enables player to shoot
	void Move();  
	void Start();
	void Satchel();
	void fWife(int &a_wX, int &a_wY);
	bool Victory();

	//private data set for Player
private:

	int m_x;
	int m_y;

};

#endif PLAYER_H


