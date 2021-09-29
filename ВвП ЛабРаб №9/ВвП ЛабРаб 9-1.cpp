#include <iostream>

int main()
{
    int sec;

    std::cin >> sec;

    int min = sec / 60;//находим целое число минут
    int last_sec = sec - min * 60;//количество секунд, прошедших с начала последней минуты

    setlocale(LC_ALL, "Russian");
    std::cout << "Количество секунд, прошедших с начала последней минуты = " << last_sec << std::endl;

    return 0;
}