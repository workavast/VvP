#include <iostream>

int PowerA3(int A, int B)
{
    B = A * A * A;

    return B;
}

int main()
{
    int a, b, c, d, e;

    setlocale(LC_ALL, "Russian");
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

    return 0;
}