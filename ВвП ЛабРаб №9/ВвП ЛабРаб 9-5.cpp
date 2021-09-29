#include <iostream>

int main()
{
    int year;

    std::cin >> year;

    int century = ((year - 1) / 100) + 1;//находим номер столетия

    setlocale(LC_ALL, "Russian");
    std::cout << "Номер столетия = " << century << std::endl;

    return 0;
}