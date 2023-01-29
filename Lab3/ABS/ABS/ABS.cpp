#include <iostream>

int main()
{
	double X;
	std::cout << "X = " << "\n";
	std::cin >> X;

	if (X > 0)
	{
		std::cout << "| " << X << " |";
	}
	else
	{
		X = 0 - X;
		std::cout << "| " << X << " |";
	}

	return 0;
	system("PAUSE");

}