#include <iostream>

int main()
{
    int K, N;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер дня года" << std::endl;
    std::cin >> K;
    std::cout << "Введите номер дня недели с которого начался год" << std::endl;
    std::cin >> N;

    int full_weeks = K / 7;//находим целое число недель
    int this_week = (K - (full_weeks * 7)) + (N - (N / 7) * 7);//находим номер дня недели для K-го дня года

    std::cout << "Номер дня недели для заданого дня года = " << this_week << std::endl;

    return 0;
}