#include "CGrid.h"
#include "Player.h"
//Constructor for Cell
Cell::Cell()
{
	m_x = 0;
	m_y = 0;
	
	m_sLife = true;
}
//Deconstructor for Cell
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

int Cell::GetPosX()
{
	return m_x;
}
int Cell::GetPosY()
{
	return m_x;
}
void Cell::SetPos(int a_px, int a_py)
{
	m_x = a_px;

	m_y = a_py;
}
bool Cell::GetAlive()
{
	return m_sLife;
}
void Cell::sAlive(bool l)
{
	m_sLife = l;
}
void Cell::Mine(int a_px, int a_py)
{
	Cell Mine;

	Mine.SetPos(1, 0);

	if (((a_px == 0 && a_py == 0) ||
		(a_px == 2 && a_py == 0) ||
		(a_px == 1 && a_py == 1) ||
		(a_px == 3 && a_py == 0) ||
		(a_px == 2 && a_py == 1) ||
		(a_px == 3 && a_py == 2) ||
		(a_px == 0 && a_py == 2) ||
		(a_px == 1 && a_py == 2) ||
		(a_px == 1 && a_py == 3)))
	{
		cout << "There is an explosive nearby\n";
	}
	if ((a_px == 1 && a_py == 0) &&
		(Mine.GetPosX() == 1 && Mine.GetPosY() == 0))
	{
		system("cls");
		cout << "KABOOOOOOOMMMM\n";
		system("pause");
		exit(1);
	}
	Mine.SetPos(3, 1);
	if ((a_px == 3 && a_py == 1) &&
		(Mine.GetPosX() == 3 && Mine.GetPosY() == 1))
	{
		system("cls");
		cout << "KABOOOOOOOMMMM\n";
		system("pause");
		exit(1);
	}
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
void Cell::Theif(Player &a_rfplayer, int a_px, int a_py)
{
	Cell Theif;

	Theif.SetPos(2, 2);

	if ((a_px == 1 && a_py == 2) ||
		(a_px == 2 && a_py == 1) ||
		(a_px == 2 && a_py == 3) ||
		(a_px == 3 && a_py == 2))
	{
		cout <<"You smell a scent of perfume\n";
	}
	Theif.sAlive(a_rfplayer.Shoot());

	if ((a_px == 2 && a_py == 2) &&
		(Theif.GetPosX() == 2 && Theif.GetPosY() == 2) && (Theif.GetAlive() == true))
	{
		system("cls");
		cout <<"You got backstabbed by the Theif\n";
		system("pause");
		exit(1);
	}
	if ((a_px == 2 && a_py == 2) &&
			(Theif.GetPosX() == 2 && Theif.GetPosY() == 2) && (Theif.GetAlive() == false))
		{
			cout <<"You killed the Theif and obtained your Wife's belongings\n";
		}

}
void Cell::Wife(Player &a_rfPlayer, int a_px, int a_py)
{
	Cell Wife;
	Wife.SetPos(3, 3);
	
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
