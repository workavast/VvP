#include <iostream>

int main()
{
    int N;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите для робота направленного на север номер команды, где 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо" << std::endl;
    std::cin >> N;

    if (N == 0)
    {
        std::cout << "Направление робота Север" << std::endl;
    }
    else
    {
        if (N == 1)
        {std::cout << "Направление робота Запад" << std::endl;}
        else
        {std::cout << "Направление робота Восток" << std::endl;}
    }
    
    return 0;
}