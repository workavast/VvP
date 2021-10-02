#include <iostream>

int main()
{
    int N, bufer, C;
    int K = 2;//Номер уже имеющегося числа Фибоначи
    int A = 0;//Значение 1-го числа Фибоначи
    int B = 1;//Значение 2-го числа Фибоначи

    setlocale(LC_ALL, "Russian");
    std::cout << "Ввеите число Фибоначи" << std::endl;
    std::cin >> N;

    while (B != N)
    {
        K = K + 1;

        C = A + B;
        A = B;
        B = C;
    }

    std::cout << "Номер введенного числа Фибоначи = " << K << std::endl;
    
    return 0;
}