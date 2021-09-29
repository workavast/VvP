#include <iostream>

int main()
{
    int a, b, c;
    
    std::cin >> a >> b >> c;

    int a1 = (b * b + c * c) / a;//находим сторону a по теореме пифагора
    int b1 = (a * a + c * c) / b;//находим сторону b по теореме пифагора
    int c1 = (a * a + b * b) / c;//находим сторону c по теореме пифагора

    bool a2 = a1 == a;
    bool b2 = b1 == b;
    bool c2 = c1 == c;

    bool d = a2 + b2 + c2;

    setlocale(LC_ALL, "Russian");
    std::cout << std::boolalpha;
    std::cout << "Треугольник со сторонами a, b, c является прямоугольным \n"<< "Ответ: " << d << std::endl;

    return 0;
}
