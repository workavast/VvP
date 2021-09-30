#include <iostream>

int main()
{
    double x1, y1, x2, y2;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите координаты первой точки через пробел" << std::endl;
    std::cin >> x1 >> y1;
    std::cout << "Введите координаты второй точки через пробел" << std::endl;
    std::cin >> x2 >> y2;

    double xx = abs(x1 - x2);//длинна стороны по оси х
    double yy = abs(y1 - y2);//длинна стороны по оси у

    double P = 2 * (xx + yy);
    double S = xx * yy;

    std::cout << "Периметр прямоугольника = " << P << std::endl;
    std::cout << "Площадь прямоугольника = " << S << std::endl;

    return 0;
}