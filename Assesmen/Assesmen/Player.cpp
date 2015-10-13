#include "Player.h"
#include "Map.h"
#include "CGrid.h"
//Constructor for player
Player::Player()
{
	m_x = 0;
	m_y = 0;
}
//Deconstructor for player
Player::~Player()
{

}
//Creates a struct for SuitCase and it contains whats inside 
struct SuitCase
{
	//creates a string name for your suitcase
	string iName;
	//Displays the amount of items within the suitcase
	int iAmount;
};
//Contains an array to contains a suitcase that contains a Pistol with one bullet and it will contain another item in the future.
SuitCase iCase[2] = { {"Pistol", 1},{"Wife", 0} };
//Gets positon of player at x
int Player::GetPosX()
{
	return m_x;
}
//Gets position of player at y
int Player::GetPosY()
{
	return m_y;
}
//Sets the position for the player
void Player::SetPos(int a_px, int a_py)
{
	m_x = a_px;

	m_y = a_py;
}
//Function that enables the player to move around the map
void Player::Move()
{
	Map mMap;
	Cell cCell;
	Player pPlayer;
	//keeps track of user input
	char uInput;
	cout << endl;

	cin >> uInput;
	//switch statement for the choices the character makes to move.
	switch (uInput)
	{
		//Actions that would happen if player where to move with w. The program will notify the player  if he cant go in that direction.
	case 'w':
	{
		SetPos(m_x, m_y - 1);

		mMap.PrintContents();

		if (m_y < 0)
		{
			SetPos(m_x, m_y = 0);
			cout << "Cannot go in that direction\n";
		}
		//Calls a function for a Land Mine
		cCell.Mine(GetPosY(), GetPosX());
		//Calls a function for the Theif
		cCell.Theif(pPlayer, GetPosY(), GetPosX());
		//Calls a function for players Wife
		cCell.Wife(pPlayer, GetPosY(), GetPosX());
		//Displays Current Position of player
		cout << "Current Position:" << GetPosY() << ',' << GetPosX() << endl;	
		break;
	}
	//Actions  that would happen if player chose to hit s. The program will notify the player if he cant go in that direction.
	case 's':
	{
		SetPos(m_x, m_y + 1);

		mMap.PrintContents();

		if (m_y > 3)
		{
			SetPos(m_x, m_y = 3);
			cout << "Cannot go in that direction\n";
		}

		cCell.Mine(GetPosY(), GetPosX());
		cCell.Theif(pPlayer, GetPosY(), GetPosX());
		cCell.Wife(pPlayer, GetPosY(), GetPosX());
		cout <<"Current Position:" << GetPosY() << ',' << GetPosX() << endl;
		break;
	}
	//Actions that would happen if player chose to hit a. The program will notify the player if he cant go in that direction.
	case 'a':
	{
		SetPos(m_x - 1, m_y);
		mMap.PrintContents();
		if (m_x < 0)
		{
			SetPos(m_x = 0, m_y);
			cout <<"Cannot go in that direction\n";
		}

		cCell.Mine(GetPosY(), GetPosX());
		cCell.Theif(pPlayer, GetPosY(), GetPosX());
		cCell.Wife(pPlayer, GetPosY(), GetPosX());
		cout <<"Current Position:" << GetPosY() << ',' << GetPosX() << endl;
		break;
	}
	//Actions that would happen if the player chose to hit d. The program will notify the player if he cant go in that direction.
	case 'd':
	{
		SetPos(m_x + 1, m_y);
		mMap.PrintContents();

		if (m_x > 3)
		{
			SetPos(m_x = 3, m_y);
			cout << "Cannot go in that direction\n";
		}
		cCell.Mine(GetPosY(), GetPosX());
		cCell.Theif(pPlayer, GetPosY(), GetPosX());
		cCell.Wife(pPlayer, GetPosY(), GetPosX());
		cout <<"Current Position:" << GetPosY() << ',' << GetPosX() << endl;
		break;
	}
	//Actions that would happen if the player chose to hit Q. This will be the action to attack the theif.
	case 'q':
	{
		Shoot();
		break;

	}
	default:
	{
		break;
	}
	};
}
//a boolean that displays if the theif is alive or not.
bool a_Theif = true;
//Functions that idenitfies if the player managed to kill the theif.
bool Player::Shoot()
{
	Cell Theif;
	Map mMap;

	if (((((GetPosX() == 1 && GetPosY() == 2) &&
		(Theif.GetAlive() == true) && (iCase[0].iAmount == 1) ||
		(GetPosX() == 3 && GetPosY() == 2) &&
		(Theif.GetAlive() == true) && (iCase[0].iAmount == 1) ||
		(GetPosX() == 2 && GetPosY() == 1) &&
		(Theif.GetAlive() == true) && (iCase[0].iAmount == 1) ||
		(GetPosX() == 2 && GetPosY() == 3) &&
		(Theif.GetAlive() == true) && (iCase[0].iAmount == 1)))))
	{
		//Theif alive equals false.
		a_Theif = false;

		iCase[0].iAmount--;

		mMap.PrintContents();

		//Indication of killing the theif.
		cout << "You shot the theif.\n";
	}
	return a_Theif;

}
//Function that displays player inventory 
void Player::Satchel()
{
	cout << "Items on Satchel:\n";

	for (int i = 0; i < 2; ++i)
	{
		cout << iCase[i].iName <<" x "<< iCase[1].iAmount << endl;
	}
}
//prompts the user to the start screen and informs the user if he wants to continue or not.
void Player::Start()
{
	Map mMap;
	char uInput;
	cout << "Welcome to Retro Madness\n";
	cout << "Would you like to continue? y/n";
	cin >> uInput;

	if (uInput == 'Y' || uInput == 'y')
	{
		system("cls");
	}
	else if (uInput == 'N' || uInput == 'n')
	{
		system("cls");
		cout << "You have exited the game\n";
	}
	else
	{
		cout <<"Invalid Choice\n";
		exit(1);
	}
}
//Function that identifies the location of the players wife and then notifies the player that he has found his wife.
void Player::fWife(int &a_rfX, int &a_rfY)
{
	Map mMap;

	if ((a_rfX == 3 && a_rfY == 3) && (iCase[1].iAmount == 0))
	{
		iCase[1].iAmount++;
		mMap.PrintContents();
		cout << "You've located your Wife :)\n";
	}
}
//A boolean statement that identifies if the player made it back to position 0,0 with his wife.
bool Player::Victory()
{
	bool dVictory = true;
	if (((GetPosX() == 0 && GetPosY() == 0) &&
		iCase[1].iAmount == 1))
	{
		cout << "You brought your wife back to safety\n";

		dVictory = false;
	}
	return dVictory;
}