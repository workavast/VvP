#include <iostream>

int main()
{
    int K,N;

    std::cin >> K >> N;

    int full_weeks = K / 7;//находим целое число недель
    int this_week = (K - (full_weeks * 7)) + (N - (N/7)*7);//находим номер дня недели для K-го дня года

    setlocale(LC_ALL, "Russian");
    std::cout << "Номер дня недели для K-го дня года = " << this_week << std::endl;

    return 0;
}