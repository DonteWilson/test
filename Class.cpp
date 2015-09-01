#include <iostream>
using namespace std;

class Date
{
public:
	Date(int,int,int);
	void PrintDate();
	
private:
	int m_day;
	int m_month;
	int	m_year;
};

Date::Date(int d,int m,int y)
{
	m_day = d;
	m_month = m;
	m_year = y;

};

void Date::PrintDate()
{
	cout << "day:" << m_day <<"\n" << endl;
	cout << "month:" << m_month << "\n" << endl;
	cout << "year:" << m_year << "\n" << endl;
}

void Print();

int main()
{
	Date present(8, 31, 2015);
	Date past(3, 17, 1806);
	present.PrintDate();
	past.PrintDate();



	system("pause");
	return 0;
}
	


