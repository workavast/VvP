#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    int ab = abs(b - a);//определяем длинну отрезка ab
    int ac = abs(c - a);//определяем длинну отрезка ac

    setlocale(LC_ALL, "Russian");
    if (ab <= ac)
    {
        std::cout << "Отвев: B = " << ab << std::endl;
    }
    else
    {
        std::cout << "Отвев: C = " << ac << std::endl;
    }

    return 0;
}