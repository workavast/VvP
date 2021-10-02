#include <iostream>

int Quarter(int x, int y)
{
    int N;

    if (x > 0)
    {
        if(y > 0)
        {N = 1;}
        else
        {N = 4;}
    }
    else
    {
        if(y > 0)
        {N = 2;}
        else
        {N = 3;}
    }

    return N;
}

int main()
{
    int x1, y1;
    int x2, y2;
    int x3, y3;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел координаты точки 1" << std::endl;
    std::cin >> x1 >> y1;
    std::cout << "Введите через пробел координаты точки 2" << std::endl;
    std::cin >> x2 >> y2;
    std::cout << "Введите через пробел координаты точки 3" << std::endl;
    std::cin >> x3 >> y3;

    double S1 = Quarter(x1, y1);
    double S2 = Quarter(x2, y2);
    double S3 = Quarter(x3, y3);

    std::cout << "Координатная четверт первой точки = " << S1 << std::endl;
    std::cout << "Координатная четверт второй точки = " << S2 << std::endl;
    std::cout << "Координатная четверт третьей точки = " << S3 << std::endl;

    return 0;
}