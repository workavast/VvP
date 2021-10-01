#include <iostream>

int main()
{
    double A, B;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите длинну отрезока В" << std::endl;
    std::cin >> B;
    std::cout << "Введите длинну отрезока А, который больше отрезка В" << std::endl;
    std::cin >> A;


    int total = A / B;

    std::cout << "Количество отрезков B, размещенных на отрезке A = " << total << std::endl;

    return 0;
}