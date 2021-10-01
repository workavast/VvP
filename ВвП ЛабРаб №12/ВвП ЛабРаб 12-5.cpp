#include <iostream>

int main()
{
    int a, color, animal;
    
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите год" << std::endl;
    std::cin >> a;

    color = a / 60;
    animal = a / 12;    

    while (color > 5)//определяем номер цвета
    {color = color / 5;}

    while (animal > 12)//определяем номер животного
    {animal = animal / 12;}

    std::cout << "Введенный год это год ";

    if (color == 1)
    {
        if ((animal != 3) & (animal != 4) & (animal != 5))
        {std::cout << "зеленной ";}
        else
        {std::cout << "зеленого ";}
    }
    if (color == 2)
    {
        if ((animal != 3) & (animal != 4) & (animal != 5))
        {std::cout << "красной ";}
        else
        {std::cout << "красного ";}
    }
    if (color == 3)
    {
        if ((animal != 3) & (animal != 4) & (animal != 5))
        {std::cout << "желтой ";}
        else
        {std::cout << "жолтого ";}
    }
    if (color == 4)
    {
        if ((animal != 3) & (animal != 4) & (animal != 5))
        {std::cout << "белой ";}
        else
        {std::cout << "белого ";}
    }
    if (color == 5)
    {
        if ((animal != 3) & (animal != 4) & (animal != 5))
        {std::cout << "черной ";}
        else
        {std::cout << "черного ";}
    }

    if (animal == 1)
    {std::cout << "крысы ";}
    if (animal == 2)
    {std::cout << "коровы ";}
    if (animal == 3)
    {std::cout << "тигра ";}
    if (animal == 4)
    {std::cout << "зайца ";}
    if (animal == 5)
    {std::cout << "дракона ";}
    if (animal == 6)
    {std::cout << "змеи ";}
    if (animal == 7)
    {std::cout << "лошади ";}
    if (animal == 8)
    {std::cout << "овцы ";}
    if (animal == 9)
    {std::cout << "обезьяны ";}
    if (animal == 10)
    {std::cout << "курицы ";}
    if (animal == 11)
    {std::cout << "собаки ";}
    if (animal == 12)
    {std::cout << "свиньи ";}

    return 0;
}