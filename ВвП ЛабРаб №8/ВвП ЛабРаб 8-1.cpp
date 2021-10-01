#include <iostream>

int main()
{
    int Bait;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число байт" << std::endl;
    std::cin >> Bait;

    int KBait = Bait / 1024;//находим чило полных килобайтов

    
    std::cout << "Число полных килобайт из заданых байт = " << KBait << std::endl;

    return 0;
}