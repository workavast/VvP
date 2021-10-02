#include <iostream>

double Fact2(int N)
{
    int Fact, K;
    int F = N % 2;

    if (F == 0)
    {
        K = 2;
        Fact = K;
        while (K < N)
        {
            K = K + 2;
            Fact = Fact * K;
        }
    }
    else
    {
        K = 1;
        Fact = K;
        while (K < N)
        {
            K = K + 2;
            Fact = Fact * K;
        }

    }

    return Fact;
}

int main()
{
    int N;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число для нахождени двойного фактариала N!! = 1·3·5·. . .·N, если N — нечетное и N!!= 2·4·6·. ..·N, если N — четное " << std::endl;
    std::cin >> N;

    double S1 = Fact2(N);

    std::cout << "Двойной фактариал =  " << S1 << std::endl;

    return 0;
}