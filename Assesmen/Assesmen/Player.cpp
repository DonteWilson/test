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
void Player::SetPos(int a_x, int a_y)
{
	m_x = a_x;

	m_y = a_y;
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
	switch (uInput)
	{
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
bool a_Theif = true;

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
		a_Theif = false;

		iCase[0].iAmount--;

		mMap.PrintContents();


		cout << "You 360 no scope the theif\n";


		
	}
}
void Player::Satchel()
{
	cout << "Items on Satchel:\n";

	for (int i = 0; i < 2; ++i)
	{
		cout << iCase[i].iName <<" x "<< iCase[1].iAmount << endl;
	}
}
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