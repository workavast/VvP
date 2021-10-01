#include <iostream>

int main()
{
    int sec;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите количество секунд, прошедших с начала суток" << std::endl;
    std::cin >> sec;

    int min = sec / 60;//находим целое число минут
    int last_sec = sec - min * 60;//количество секунд, прошедших с начала последней минуты

    std::cout << "Количество секунд, прошедших с начала последней минуты = " << last_sec << std::endl;

    return 0;
}