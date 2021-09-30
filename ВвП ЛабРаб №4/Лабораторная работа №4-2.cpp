#include <iostream>

int main()
{
	int d;

	setlocale(LC_ALL, "Russian");
	std::cout << "Введите диаметр окружности" << std::endl;
	std::cin >> d;

	double L = 3.14 * d;

	std::cout << "Длинна окружности = " << L << std::endl;

	return 0;
}