#include <iostream>

int main()
{
    double x1,y1,x2,y2,x3,y3;

    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double x12 = abs(x1 - x2);//длинна стороны по оси х
    double y12 = abs(y1 - y2);//длинна стороны по оси у
    double xy12 = sqrt(pow(x12,2)+pow(y12,2));//длинна отрезка x1:y1 x2:y2

    double x13 = abs(x1 - x3);//длинна стороны по оси х
    double y13 = abs(y1 - y3);//длинна стороны по оси у
    double xy13 = sqrt(pow(x13, 2) + pow(y13, 2));//длинна отрезка x1:y1 x3:y3

    double x23 = abs(x2 - x3);//длинна стороны по оси х
    double y23 = abs(y2 - y3);//длинна стороны по оси у
    double xy23 = sqrt(pow(x23, 2) + pow(y23, 2));//длинна отрезка x2:y2 x3:y3


    double P = xy12 + xy13 + x23;//периметр
    double S = 0.5*abs((x2-x1)*(y3-y1)-(y2-y1)*(x3-x1)) ;//площадь

    std::cout << "P = " << P << std::endl;
    std::cout << "S = " << S << std::endl;

    return 0;
}