#include <iostream>

int main()
{


	int a, b, c, d, e;
	float ave;

	std::cout << "Average of 5 numbers" << std::endl;
	std::cout << "Enter 5 numbers: " << std::endl;

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;

	ave = a + b + c + d + e / 5.0;

	std::cout << "The Average of those 5 numbers is: " << ave << std::endl;

	system("pause");

	return 0;

}