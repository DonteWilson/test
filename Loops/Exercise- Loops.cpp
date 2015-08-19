#include <iostream>
int main()
{
	int enter;
	int a = 100;
	
	std::cout << " Count to 100" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
	}

	for (int i = 0; i < 101; i++)
	{
		if (i > 100)
		{
			break;
		}
		std::cout << i << std::endl;

	}
	std::cout << " Counting Complete" << std::endl;

	std::cin >> enter;
	return 0;
}