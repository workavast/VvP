#include <iostream>

int main()
{
    int A, N;
    int n = 0;
    int total = 0;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел число А и его степень N, для поиска значения выражения 1 - A + A^2 - A^3 + ... +- A^N" << std::endl;
    std::cin >> A >> N;

    while (N >= n)
    {
        total = total + pow(-A, n);
        n = n + 1;
    }

    std::cout << "Значение выражения = " << total << std::endl;

    return 0;
}