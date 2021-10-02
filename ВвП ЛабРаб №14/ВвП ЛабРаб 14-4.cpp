#include <iostream>

int main()
{
    int P;
    int total = 1000;
    int K = 0;

    setlocale(LC_ALL, "Russian");
    std::cout << "Начальный вклад в банке равен 1000 руб. Через каждый месяц размер вклада увеличивается на P процентов от имеющейся суммы (P — вещественное число, 0 < P < 25). Введите значение Р" << std::endl;
    std::cin >> P;

    while (total <= 1100)
    {
        K = K + 1;
        total = total + total * P / 100;
    }

    std::cout << "Размер вклада превысит 1100 руб через " << K << " месяцев" << std::endl;
    std::cout << "итоговый размер вклада " << total << std::endl;

    return 0;
}