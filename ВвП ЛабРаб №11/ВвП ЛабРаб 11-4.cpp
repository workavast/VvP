#include <iostream>

int main()
{
    int x, y;

    std::cin >> x >> y;

    setlocale(LC_ALL, "Russian");
    if (x > 0)
    {
        if (y > 0)
        {std::cout << "Первая четверть" << std::endl;}//первая четверть имеет вид +x;+y
        else
        {std::cout << "Третья четверть" << std::endl;}//третья четверть имеет вид +x;-y
    }
    else
    {
        if (y > 0)
        {std::cout << "Вторая четверть" << std::endl;}//вторая четверть имеет вид -x;+y
        else
        {std::cout << "Четвёртая четверть" << std::endl;}//четвертая четверть имеет вид -x;-y
    }
    
    return 0;
}