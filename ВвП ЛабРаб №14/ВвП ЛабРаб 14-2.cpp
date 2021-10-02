#include <iostream>

int main()
{
    int A, A2, B;
    int N = 0;
    int bufer = 0;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел значения отрезков A>B" << std::endl;
    std::cin >> A >> B;

    A2 = A;

    while (A2 >= B)
    {
         bufer = bufer + B;
         A2 = A2 - B;
    }

    N = A - bufer;
    std::cout << "Длина незанятой части отрезка A = " << N << std::endl;

    return 0;
}