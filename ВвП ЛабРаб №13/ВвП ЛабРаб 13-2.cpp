#include <iostream>

int main()
{
    int N;
    double d = 1.1;
    double b = 1;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите количество сомножителей" << std::endl;
    std::cin >> N;

    while (N > 0)
    {
        N = N - 1;
        b = b * d;
        d = d + 0.1;
        std::cout << " " << b << std::endl;
    }

    std::cout << "Произведение заданого количества сомножителей = " << b << std::endl;

    return 0;
}