#include <iostream>

int main()
{
    double V1, V2, S, T;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите скорость первого автомобиля" << std::endl;
    std::cin >> V1;
    std::cout << "Введите скорость второго автомобиля" << std::endl;
    std::cin >> V2;
    std::cout << "Введите начальное растояние между автомобилями" << std::endl;
    std::cin >> S;
    std::cout << "Введите время в течении которого автомобили ехали" << std::endl;
    std::cin >> T;

    double V0 = V1 + V2;//общая скорость автомобилей
    double S0 = V0 * T + S;//расстояние между автомобилями через Т времени

    std::cout << "Расстояние между автомобилями спкстя заданное время = " << S0 << std::endl;

    return 0;
}