#include <iostream>

int main()
{
	double a, b;

	std::cin >> a >> b;
	
	double c = (a + b) / 2;

	setlocale(LC_ALL, "Russian");
	std::cout << "Среднее арифметическое a и b = " << c << std::endl;

	return 0;
}