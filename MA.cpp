#include <iostream>
#include <string>
using namespace std;

class Monk
{
public: 
	Monk(int,int,int,int);
	void Ability();
	
private:
	int  Wind;
	int  Kick;
	int  Hurricane;
	int Mystery;
};


Monk::Monk(int a, int b, int  c, int d)
{
	Wind = a;
	Kick = b;
	Hurricane = c;
	Mystery = d;
};
void Monk::Ability()
{	
	int t;
	int v;
	cout << "What ability do you want to use?" << endl;
	cout << "1. Wind \n2.Kick\n3.Hurricane\n4.Mystery" << endl;
	cin >> t;
	switch (t)
	{
	case 1:
		cout <<"\n"<<"Target is blown away" << "\n" << endl;
		break;
	case 2:
			cout <<"\n"<< "Ouch that hurts" << "\n" << endl;
			break;
	case 3:
		cout <<"\n"<< "Holy Moly" << "\n" << endl;
		break;
	case 4:
		cout << "\n" << " ??? WHAT IS THIS ???.............JOHN CENA? DUNDUDNDUDNDUDNDUNDUDNUDNDUNDUDNDUDN" << endl;
	}
	
}

	
	
	

void Ability();

int main()
{
	Monk Joe = Monk(1,2,3,4);
	Joe.Ability();
	
	Monk Cena = Monk(4,3,2,1);
	Monk.Ability();


	system("pause");
	return 0;

}




		






