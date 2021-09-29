#include <iostream>

int main()
{
    int A, B, C;

    std::cin >> A >> B >> C;

    int S_ab = A * B;//находим площадь прямоугольника
    int S_c = C * C;//находим площадь квадрата
    int N_full = S_ab / S_c;//находим число полных квадратов в прямоугольнике
    int S_empty = S_ab - N_full * S_c;////находим площадь не занятой части прямоугольника

    setlocale(LC_ALL, "Russian");
    std::cout << "Количество квадратов, размещенных на прямоугольнике = "<< N_full<< std::endl;
    std::cout << "Площадь незанятой части прямоугольника = " << S_empty << std::endl;
}