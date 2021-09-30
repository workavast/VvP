#include <iostream>

int main()
{
    double x1, y1, x2, y2;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите координаты первой точки через пробел" << std::endl;
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты первой точки через пробел" << std::endl;
    std::cin >> x2 >> y2;

    double S = sqrt(pow((x1 - x2),2) + pow((y1 - y2), 2));//теорема пифагора

    std::cout <<"Расстояние между двумя точками с заданными координатами  = " << S << std::endl;

    return 0;
}