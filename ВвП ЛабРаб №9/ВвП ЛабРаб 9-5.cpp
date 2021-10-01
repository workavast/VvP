#include <iostream>

int main()
{
    int year;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите год" << std::endl;
    std::cin >> year;

    int century = ((year - 1) / 100) + 1;//находим номер столетия

    std::cout << "Номер столетия = " << century << std::endl;

    return 0;
}