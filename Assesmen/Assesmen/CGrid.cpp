#include "CGrid.h"
#include "Player.h"
//Constructor for Cell
Cell::Cell()
{
	m_x = 0;
	m_y = 0;
	
	m_sLife = true;
}
//Destructor for Cell
Cell::~Cell()
{

}
//Structor for storing Cells x and y
Cell Cell::dCell(int a_px, int a_py)
{
Cell cCell;
cCell.m_x = a_px;
cCell.m_y = a_py;

return cCell;
}
//Obtains the private variable m_x from the class Player
int Cell::GetPosX()
{
	return m_x;
}
//Obtains the private variable m_y from the class Player
int Cell::GetPosY()
{
	return m_y;
}
void Cell::SetPos(int a_px, int a_py)
{
	m_x = a_px;

	m_y = a_py;
}
//Cell::GetAlive is used to get the private variable m_sLife. So it can be used outside of the class.
bool Cell::GetAlive()
{
	//Returns the private variable m_sLife
	return m_sLife;
}
void Cell::sAlive(bool l)
{
	//makes the private variable m_sLife = 1
	m_sLife = l;
}
void Cell::Mine(int a_px, int a_py)
{
	Cell Mine;

	Mine.SetPos(1, 0);
	//Sets the positions of warnings for the explosives.
	if ((a_px == 0 && a_py == 0) ||
		(a_px == 2 && a_py == 0) ||
		(a_px == 1 && a_py == 1) ||
		(a_px == 3 && a_py == 0) ||
		(a_px == 2 && a_py == 1) ||
		(a_px == 3 && a_py == 2) ||
		(a_px == 0 && a_py == 2) ||
		(a_px == 1 && a_py == 2) ||
		(a_px == 1 && a_py == 3))
	{
		//Indicates that there is an explosive nearby
		cout << "There is an explosive nearby\n";
	}
	//Creates an if statement stating that there is a landmine at this location.
	if ((a_px == 1 && a_py == 0) &&
		(Mine.GetPosX() == 1 && Mine.GetPosY() == 0))
	{
		system("cls");
		cout << "KABOOOOOOOMMMM\n";
		system("pause");
		exit(1);
	}
	//Creates an if statement stating that there is a landmine at this location
	Mine.SetPos(3, 1);
	if ((a_px == 3 && a_py == 1) &&
		(Mine.GetPosX() == 3 && Mine.GetPosY() == 1))
	{
		system("cls");
		cout << "KABOOOOOOOMMMM\n";
		system("pause");
		exit(1);
	}
	//Creates an if statment stating that there is a landmind at this location
	Mine.SetPos(0, 3);

	if ((a_px == 0 && a_py == 3) &&
		(Mine.GetPosX() == 0 && Mine.GetPosY() == 3))
	{
		system("cls");
		cout << "KABOOOOOOOMMMM\n";
		system("pause");
		exit(1);
	}
}
//Indicates Theif's position and compares it to the position of the player.
void Cell::Thief(Player &a_rfplayer, int a_px, int a_py)
{
	//Creates a cell called Theif so it can be used throughout the program.
	Cell Thief;
	//Gives position to the Theif
	Thief.SetPos(2, 2);
	//Records position of player so it can indicate one of the senses.
	if ((a_px == 1 && a_py == 2) ||
		(a_px == 2 && a_py == 1) ||
		(a_px == 2 && a_py == 3) ||
		(a_px == 3 && a_py == 2))
	{
		cout <<"You smell a scent of perfume\n";
	}
	Thief.sAlive(a_rfplayer.Shoot());
	//Checks position of the player
	if ((a_px == 2 && a_py == 2) &&
		(Thief.GetPosX() == 2 && Thief.GetPosY() == 2) && (Thief.GetAlive() == true))
	{
		//Below happens if the position of the player is correct.
		system("cls");
		cout <<"You got backstabbed by the Thief\n";
		system("pause");
		exit(1);
	}
	//Checks to see if the thief is alive.
	if ((a_px == 2 && a_py == 2) &&
			(Thief.GetPosX() == 2 && Thief.GetPosY() == 2) && (Thief.GetAlive() == false))
		{
			cout <<"You've located where the thief once stood. You found your Wife's belongings.\n";
		}

}
//Checks the positon of the players Wife and the position of the Player
void Cell::Wife(Player &a_rfPlayer, int a_px, int a_py)
{
	Cell Wife;
	Wife.SetPos(3, 3);
	//Checks position of the player.
	if ((a_px == 2 && a_py == 3) ||
		(a_px == 3 && a_py == 2))
	{
		cout << "There is a smell of Perfume\n";
	}
	if ((a_px == 3 && a_py == 3) &&
		(Wife.GetPosX() == 3 && Wife.GetPosY() == 3))
	{
		a_rfPlayer.fWife(a_px, a_py);
	}
}
