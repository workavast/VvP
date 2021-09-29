#include <iostream>

int main()
{
    int Bait;

    std::cin >> Bait;

    int KBait = Bait / 1024;//находим чило полных килобайтов
    
    setlocale(LC_ALL, "Russian");
    std::cout << "Килобайтов = " << KBait << std::endl;

    return 0;
}