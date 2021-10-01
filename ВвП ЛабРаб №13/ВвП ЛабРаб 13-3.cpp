#include <iostream>

int main()
{
    int N;
    int n = 1;
    int total = 0;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число, для вычисления которого исбудет использована следующую формулу: N^2 = 1 + 3 + 5 + . . . + (2·N - 1). После добавления к сумме каждого слагаемого будет выведено текущее значение суммы " << std::endl;
    std::cin >> N;

    while(n<=(2*N - 1))
    {
        std::cout << "Текущее значение суммы = " << n << std::endl;
        total = total + n;
        n = n + 2;
    }

    std::cout << "Введенное число в квадрате = " << total << std::endl;

    return 0;
}