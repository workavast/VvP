#include <iostream>

int main()
{
	int a, b;

	std::cin >> a >> b;

	int S = a * b;
	int P = 2 * (a + b);

	std::cout << "S = " << S << std::endl;
	std::cout << "P = " << P << std::endl;

	return 0;
}