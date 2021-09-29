#include <iostream>

int main()
{
    double A, B;

    std::cin >> A >> B;

    int total = A / B;

    setlocale(LC_ALL, "Russian");
    std::cout << "Количество отрезков B, размещенных на отрезке A = " << total << std::endl;

    return 0;
}