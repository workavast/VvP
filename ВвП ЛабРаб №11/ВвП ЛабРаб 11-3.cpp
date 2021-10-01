#include <iostream>

int main()
{
    int a, b, c;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел координаты по оси х для трех точек А, В, С" << std::endl;
    std::cin >> a >> b >> c;

    int ab = abs(b - a);//определяем длинну отрезка ab
    int ac = abs(c - a);//определяем длинну отрезка ac

    if (ab <= ac)
    {
        std::cout << "К точке А ближе точка B, растояние между ними = " << ab << std::endl;
    }
    else
    {
        std::cout << "К точке А ближе точка С, растояние между ними =" << ac << std::endl;
    }

    return 0;
}