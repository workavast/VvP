#include <iostream>

int main()
{
    int K;

    std::cin >> K;

    int full_weeks = K / 7;//находим целое число недель
    int this_week = (K - (full_weeks * 7)) + 1;//находим номер дня недели для K-го дня года

    setlocale(LC_ALL, "Russian");
    std::cout << "Номер дня недели для K-го дня года = " << this_week << std::endl;

    return 0;
}