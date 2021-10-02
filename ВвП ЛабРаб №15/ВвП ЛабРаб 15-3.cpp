#include <iostream>

double RingS(double R1, double R2)
{
    double S1 = 3.14 * R1 * R1;
    double S2 = 3.14 * R2 * R2;
    double S0 = S1-S2;

    return S0;
}

int main()
{
    int A1, A2;
    int B1, B2;
    int C1, C2;
    
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите через пробел два значения радиусов, где R1>R2" << std::endl;
    std::cin >> A1 >> A2;
    std::cout << "Введите через пробел два значения радиусов, где R1>R2" << std::endl;
    std::cin >> B1 >> B2;
    std::cout << "Введите через пробел два значения радиусов, где R1>R2" << std::endl;
    std::cin >> C1 >> C2;

    double S1 = RingS(A1, A2);
    double S2 = RingS(B1, B2);
    double S3 = RingS(C1, C2);

    std::cout << "Радиус первого кольца " << S1 << std::endl;
    std::cout << "Радиус второго кольца " << S2 << std::endl;
    std::cout << "Радиус третьего кольца " << S3 << std::endl;

    return 0;
}