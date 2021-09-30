#include <iostream>

int main()
{
	double a, b;

	setlocale(LC_ALL, "Russian");
	std::cout << "Введите первое число" << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число" << std::endl;
	std::cin >> b;

	double c = (a + b) / 2;

	std::cout << "Среднее арифметическое чисел = " << c << std::endl;

	return 0;
}