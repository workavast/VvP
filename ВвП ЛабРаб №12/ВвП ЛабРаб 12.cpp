#include <iostream>

int main()
{
    int LABA;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер задания" << std::endl;
    std::cin >> LABA;

    switch (LABA)
    {
    case 1://-----------------------------------------------------------------
    {
        std::cout << "\n---Задание №1---\n" << std::endl;

    int day, month;

    std::cout << "Введите номер дня" << std::endl;
    std::cin >> day;
    std::cout << "Введите номер месяца" << std::endl;
    std::cin >> month;

    switch (day)
    {
    case 1:
        std::cout << "первое ";
        break;
    case 2:
        std::cout << "второе ";
        break;
    case 3:
        std::cout << "третье ";
        break;
    case 4:
        std::cout << "четвертое ";
        break;
    case 5:
        std::cout << "пятое ";
        break;
    case 6:
        std::cout << "шестое ";
        break;
    case 7:
        std::cout << "седьмое ";
        break;
    case 8:
        std::cout << "восьмое ";
        break;
    case 9:
        std::cout << "девятое ";
        break;
    case 10:
        std::cout << "десятое ";
        break;
    case 11:
        std::cout << "одиннадцатое ";
        break;
    case 12:
        std::cout << "двеннадцатое ";
        break;
    case 13:
        std::cout << "тринадцатое ";
        break;
    case 14:
        std::cout << "четырнадцатое ";
        break;
    case 15:
        std::cout << "пятнадцатое ";
        break;
    case 16:
        std::cout << "шестнадцатое ";
        break;
    case 17:
        std::cout << "семнадцатое ";
        break;
    case 18:
        std::cout << "восемнадцатое ";
        break;
    case 19:
        std::cout << "девятнадцатое ";
        break;
    case 20:
        std::cout << "двадцатое ";
        break;
    case 21:
        std::cout << "двадцать первое ";
        break;
    case 22:
        std::cout << "двадцать второе ";
        break;
    case 23:
        std::cout << "двадцать третье ";
        break;
    case 24:
        std::cout << "двадцать четвертое";
        break;
    case 25:
        std::cout << "двадцать пятое";
        break;
    case 26:
        std::cout << "двадцать шестое";
        break;
    case 27:
        std::cout << "двадцать седьмое";
        break;
    case 28:
        std::cout << "двадцать восьмое";
        break;
    case 29:
        std::cout << "двадцать девятое";
        break;
    case 30:
        std::cout << "тридцатое ";
        break;
    case 31:
        std::cout << "тридцать первое ";
        break;
    }

    switch (month)
    {
    case 1:
        std::cout << "января ";
        break;
    case 2:
        std::cout << "февраля ";
        break;
    case 3:
        std::cout << "марта ";
        break;
    case 4:
        std::cout << "апреля ";
        break;
    case 5:
        std::cout << "мая ";
        break;
    case 6:
        std::cout << "июня ";
        break;
    case 7:
        std::cout << "июля ";
        break;
    case 8:
        std::cout << "августа ";
        break;
    case 9:
        std::cout << "сентября ";
        break;
    case 10:
        std::cout << "октября ";
        break;
    case 11:
        std::cout << "ноября ";
        break;
    case 12:
        std::cout << "декабря ";
        break;
    }
    }
    case 2://-----------------------------------------------------------------
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int N;
        char C;
        std::cout << "Введите для робота начальное направленние, где «N» — север, «W» — запад, «S» — юг, «E» — восток" << std::endl;
        std::cin >> C;
        std::cout << "Введите для робота направленного на север номер команды, где 0 — продолжать движение, 1 — поворот налево, -1 — поворот направо" << std::endl;
        std::cin >> N;


        if (C == 'N')
        {
            if (N == 0)
            {
                std::cout << "Направление робота Север" << std::endl;
            }
            else
            {
                if (N == 1)
                {
                    std::cout << "Направление робота Запад" << std::endl;
                }
                else
                {
                    std::cout << "Направление робота Восток" << std::endl;
                }
            }
        }
        else
        {
            if (C == 'W')
            {
                if (N == 0)
                {
                    std::cout << "Направление робота Запад" << std::endl;
                }
                else
                {
                    if (N == 1)
                    {
                        std::cout << "Направление робота Юг" << std::endl;
                    }
                    else
                    {
                        std::cout << "Направление робота Север" << std::endl;
                    }
                }
            }
            else
            {
                if (C == 'S')
                {
                    if (N == 0)
                    {
                        std::cout << "Направление робота Юг" << std::endl;
                    }
                    else
                    {
                        if (N == 1)
                        {
                            std::cout << "Направление робота Восток" << std::endl;
                        }
                        else
                        {
                            std::cout << "Направление робота Запад" << std::endl;
                        }
                    }
                }
                else
                {
                    if (N == 0)
                    {
                        std::cout << "Направление робота Восток" << std::endl;
                    }
                    else
                    {
                        if (N == 1)
                        {
                            std::cout << "Направление робота Север" << std::endl;
                        }
                        else
                        {
                            std::cout << "Направление робота Юг" << std::endl;
                        }
                    }
                }
            }
        }

    }
    case 3://-----------------------------------------------------------------
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

    int N;

    std::cout << "Введите количество(от 10 до 40) учебных заданий по некоторой теме, для перевода числа в словесную форму" << std::endl ;
    std::cin >> N;

    if (N > 20)
    {
        if ((N > 30)&(N < 40))//находится ли число между 30 и 40
        {
            std::cout << "тридцать ";
        }
        else
        {
            if (N < 30)//находится ли число между 20 и 30
            {std::cout << "двадцать ";}
        }
    }

    if (N == 20)
    {std::cout << "двадцать ";}
    if (N == 30)
    {std::cout << "тридцать ";}
    if (N == 40)
    {std::cout << "сорок ";}

    int a = N / 10;
    int b = N - a * 10;

    if ((N > 9) & (N < 20))
    {
        if (N == 10)
        {std::cout << "десять ";}
        if (N == 11)
        {std::cout << "одиннадцать ";}
        if (N == 12)
        {std::cout << "двенадцать ";}
        if (N == 13)
        {std::cout << "тринадцать ";}
        if (N == 14)
        {std::cout << "четырнадцать ";}
        if (N == 15)
        {std::cout << "пятнадцать ";}
        if (N == 16)
        {std::cout << "шестнадцать ";}
        if (N == 17)
        {std::cout << "семнадцать ";}
        if (N == 18)
        {std::cout << "восемнадцать ";}
        if (N == 19)
        {std::cout << "девятнадцать ";}
    }
    else
    {
        if (b == 1)
        {std::cout << "одно ";}
        if (b == 2)
        {std::cout << "два ";}
        if (b == 3)
        {std::cout << "три ";}
        if (b == 4)
        {std::cout << "четыре ";}
        if (b == 5)
        {std::cout << "пять ";}
        if (b == 6)
        {std::cout << "шесть ";}
        if (b == 7)
        {std::cout << "семь ";}
        if (b == 8)
        {std::cout << "восемь ";}
        if (b == 9)
        {std::cout << "девять ";}
    }

    if ((N != 21)&(N != 31))
    {std::cout << "учебных заданий" << std::endl;}
    else
    {std::cout << "учебное задание" << std::endl;}
    }
    case 4://-----------------------------------------------------------------
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

    int N,N100,N10,N1;

    std::cout << "Введите число от 100 до 999" << std::endl;
    std::cin >> N;

    N100 = N / 100;//находим значение сотен
    N10 = (N - N100*100 )/ 10;//находим значение десятков
    N1 = (N - N100*100)-(N10*10);//находим значение единиц

    if (N100 <= 5)//выводим значение сотен
    {
        if (N100==1)
        {std::cout << "Введенное число - сто ";}
        if (N100==2)
        {std::cout << "Введенное число - двести ";}
        if (N100==3)
        {std::cout << "Введенное число - триста ";}
        if (N100==4)
        {std::cout << "Введенное число - четыресто ";}
        if (N100==5)
        {std::cout << "Введенное число - пятьсот ";}
    }
    else 
    {
        if (N100==6)
        {std::cout << "Введенное число - шестьсот ";}
        if (N100==7)
        {std::cout << "Введенное число - семьсот ";}
        if (N100==8)
        {std::cout << "Введенное число - восемьсот ";}
        if (N100==9)
        {std::cout << "Введенное число - девятьсот ";}
    }

    
    if (N10 <= 5)//выводим значение десятков
    {
        if (N10==1)
        {
            if(N1==0)
            {std::cout << "десять ";}
            if(N1==1)
            {std::cout << "одиннадцать ";}
            if(N1==2)
            {std::cout << "двеннадцать ";}
            if(N1==3)
            {std::cout << "тринадцать ";}
            if(N1==4)
            {std::cout << "четырнадцать ";}
            if(N1==5)
            {std::cout << "пятнадцать ";}
            if(N1==6)
            {std::cout << "шестнадцать ";}
            if(N1==7)
            {std::cout << "семнадцать ";}
            if(N1==8)
            {std::cout << "восемнадцать ";}
            if(N1==9)
            {std::cout << "девятнадцать ";}
            
        }
        if (N10==2)
        {std::cout << "двадцать ";}
        if (N10==3)
        {std::cout << "тридцать ";}
        if (N10==4)
        {std::cout << "сорок ";}
        if (N10==5)
        {std::cout << "пятьдесят ";}
    }
    else
    {
        if (N10==6)
        {std::cout << "шестдесят ";}
        if (N10==7)
        {std::cout << "семьдесят ";}
        if (N10==8)
        {std::cout << "восемьдесят ";}
        if (N10==9)
        {std::cout << "девяносто ";}
    }


    if ((N1 <= 5)&(N10!=1))//выводим значение единиц
    {
        if (N1==1)
        {std::cout << "один ";}
        if (N1==2)
        {std::cout << "два ";}
        if (N1==3)
        {std::cout << "три ";}
        if (N1==4)
        {std::cout << "четыре ";}
        if (N1==5)
        {std::cout << "пять ";}
    }
    else
    {
        if (N10 != 1)
        {
        if (N1==6)
        {std::cout << "шесть ";}
        if (N1==7)
        {std::cout << "семь ";}
        if (N1==8)
        {std::cout << "восемь ";}
        if (N1==9)
        {std::cout << "девять ";}
        }
    }
    }
    case 5://-----------------------------------------------------------------
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int a, color, animal;
    
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
        std::cout << std::endl;
    }
    }

    return 0;
}