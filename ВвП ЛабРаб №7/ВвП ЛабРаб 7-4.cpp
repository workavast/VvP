#include <iostream>

int main()
{
    double V1, V2, S, T;

    std::cin >> V1 >> V2 >> S >> T;

    double V0 = V1 + V2;//общая скорость автомобилей
    double S0 = V0 * T + S;//расстояние между автомобилями через Т времени

    setlocale(LC_ALL, "Russian");
    std::cout << "Расстояние между автомобилями = " << S0 << std::endl;

    return 0;
}