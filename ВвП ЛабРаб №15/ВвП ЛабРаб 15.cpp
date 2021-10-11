#include <iostream>

int PowerA3(int A, int B)
{
    B = A * A * A;

    return B;
}

int Sign(double X)
{
    if(X<0)
    {X = -1;}

    if(X==0)
    {X = 0;}   

    if(X>0)
    {X = 1;}

    return X;
}

double RingS(double R1, double R2)
{
    double S1 = 3.14 * R1 * R1;
    double S2 = 3.14 * R2 * R2;
    double S0 = S1 - S2;

    return S0;
}

int Quarter(int x, int y)
{
    int N;

    if (x > 0)
    {
        if(y > 0)
        {N = 1;}
        else
        {N = 4;}
    }
    else
    {
        if(y > 0)
        {N = 2;}
        else
        {N = 3;}
    }

    return N;
}

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
    int LABA;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите номер задания" << std::endl;
    std::cin >> LABA;

    switch (LABA)
    {
    case 1://---
    {
        std::cout << "\n---Задание №1---\n" << std::endl;

        int a, b, c, d, e;

        std::cout << "Введите через пробел пять чисел для возведения в куб" << std::endl;
        std::cin >> a >> b >> c >> d >> e;

        a = PowerA3(a, 0);
        b = PowerA3(b, 0);
        c = PowerA3(c, 0);
        d = PowerA3(d, 0);
        e = PowerA3(e, 0);

        std::cout << "Значения заданных чисел в третьих степенях" << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << d << std::endl;
        std::cout << e << std::endl;
    }
    case 2://---
    {
        std::cout << "\n---Задание №2---\n" << std::endl;

        int A, B, sum;

        std::cout << "Введите через пробел значения А и В для решения выражения Sign(A) + Sign(B), где Sign = −1, если число < 0; 0, если число = 0; 1, если число > 0. " << std::endl;
        std::cin >> A >> B;

        sum = Sign(A) + Sign(B);

        std::cout << "Значение выражения = " << sum << std::endl;
    }
    case 3://---
    {
        std::cout << "\n---Задание №3---\n" << std::endl;

        int A1, A2;
        int B1, B2;
        int C1, C2;

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
    }
    case 4://---
    {
        std::cout << "\n---Задание №4---\n" << std::endl;

        int x1, y1;
        int x2, y2;
        int x3, y3;

        std::cout << "Введите через пробел координаты точки 1" << std::endl;
        std::cin >> x1 >> y1;
        std::cout << "Введите через пробел координаты точки 2" << std::endl;
        std::cin >> x2 >> y2;
        std::cout << "Введите через пробел координаты точки 3" << std::endl;
        std::cin >> x3 >> y3;

        double S1 = Quarter(x1, y1);
        double S2 = Quarter(x2, y2);
        double S3 = Quarter(x3, y3);

        std::cout << "Координатная четверть первой точки = " << S1 << std::endl;
        std::cout << "Координатная четверть второй точки = " << S2 << std::endl;
        std::cout << "Координатная четверть третьей точки = " << S3 << std::endl;
    }
    case 5://---
    {
        std::cout << "\n---Задание №5---\n" << std::endl;

        int N;

        std::cout << "Введите число для нахождени двойного фактариала N!! = 1·3·5·. . .·N, если N — нечетное и N!!= 2·4·6·. ..·N, если N — четное " << std::endl;
        std::cin >> N;

        double S1 = Fact2(N);

        std::cout << "Двойной фактариал =  " << S1 << std::endl;
    }
    }

    return 0;
}