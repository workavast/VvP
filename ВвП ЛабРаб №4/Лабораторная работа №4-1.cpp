#include <iostream>

int main()
{
	int a, b;

	setlocale(LC_ALL, "Russian");
	std::cout << "Введите сторону a " << std::endl;
	std::cin >> a;
	std::cout << "Введите сторону b " << std::endl;
	std::cin >> b;

	int S = a * b;//находим площадь
	int P = 2 * (a + b);//находим периметр

	std::cout << "Площадь прямоугольника = " << S << std::endl;
	std::cout << "Периметр прямоугольника = " << P << std::endl;

	return 0;
}