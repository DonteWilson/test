#include "CGrid.h"
#include "Player.h"

Cell::Cell()
{
	m_x = 0;
	m_y = 0;
	
	m_sLife = true;
}

Cell::~Cell()
{

}
Cell Cell::dCell(int a_y, int a_x)
{
Cell cCell;
cCell.m_x = a_x;
cCell.m_y = a_y;

return cCell;
}

int Cell::GetPosX()
{
	return m_x;
}
int Cell::GetPosY()
{
	return m_x;
}
void Cell::SetPos(int a_x, int a_y)
{
	m_x = a_x;

	m_y = a_x;
}
bool Cell::GetAlive()
{
	return m_sLife;
}
void Cell::sAlive(bool s_a)
{
	m_sLife = 1;
}
void Cell::Mine(int a_x, int a_y)
{
	Cell Mine;

	Mine.SetPos(1, 0);

	if (((a_x == 0 && a_y == 0) ||
		(a_x == 2 && a_y == 0) ||
		(a_x == 1 && a_y == 1) ||
		(a_x == 3 && a_y == 0) ||
		(a_x == 2 && a_y == 1) ||
		(a_x == 3 && a_y == 2) ||
		(a_x == 0 && a_y == 2) ||
		(a_x == 1 && a_y == 2) ||
		(a_x == 1 && a_y == 3)))
	{
		cout << "There is an explosive nearby\n";
	}
	if ((a_x == 1 && a_y == 0) &&
		(Mine.GetPosX() == 1 && Mine.GetPosY() == 0))
	{
		system("cls");
		cout << "KABOOOOOOOMMMM\n";
		system("pause");
		exit(1);
	}
	Mine.SetPos(3, 1);
	if ((a_x == 3 && a_y == 1) &&
		(Mine.GetPosX() == 3 && Mine.GetPosY() == 1))
	{
		system("cls");
		cout << "KABOOOOOOOMMMM\n";
		system("pause");
		exit(1);
	}
	Mine.SetPos(0, 3);

	if ((a_x == 0 && a_y == 3) &&
		(Mine.GetPosX() == 0 && Mine.GetPosY() == 3))
	{
		system("cls");
		cout << "KABOOOOOOOMMMM\n";
		system("pause");
		exit(1);
	}
}
void Cell::Theif(Player &a_rfplayer, int a_x, int a_y)
{
	Cell Theif;

	Theif.SetPos(2, 2);

	if ((a_x == 1 && a_y == 2) ||
		(a_x == 2 && a_y == 1) ||
		(a_x == 2 && a_y == 3) ||
		(a_x == 3 && a_y == 2))
	{
		cout <<"You smell a scent of perfume\n";
	}
	Theif.sAlive(a_rfplayer.Shoot());

	if ((a_x == 2 && a_y == 2) &&
		(Theif.GetPosX() == 2 && Theif.GetPosY() == 2) && (Theif.GetAlive() == true))
	{
		system("cls");
		cout <<"You got backstabbed by the Theif\n";
		system("pause");
		exit(1);
	}
	if ((a_x == 2 && a_y == 2) &&
		(Theif.GetPosX() == 2 && Theif.GetPosY() == 2) && Theif.GetAlive() == false)
		{
			cout <<"You killed the Theif and obtained your Wife's belongings";
		}

}
void Cell::Wife(Player &a_rfPlayer, int a_x, int a_y)
{
	Cell Wife;
	Wife.SetPos(3, 3);
	
	if ((a_x == 2 && a_y == 3) ||
		(a_x == 3 && a_y == 2))
	{
		cout << "There is a smell of Perfume\n";
	}
	if ((a_x == 3 && a_y == 3) &&
		(Wife.GetPosX() == 3 && Wife.GetPosY() == 3))
	{
		a_rfPlayer.fWife(a_x, a_y);
	}
}
