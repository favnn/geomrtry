#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

//double coefficient(double side_1, double side_2) // Соотношение сторон
//{
//    if (side_1 <= side_2) return side_1 / side_2;
//    else return side_2 / side_1;
//}

double segment_length(double X1, double Y1, double X2, double Y2) // Длина отрезка
{
    return sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));
}

void intersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    double a1 = y1 - y2;
    double b1 = x2 - x1;
    double c1 = x1 * y2 - x2 * y1;

    double a2 = y3 - y4;
    double b2 = x4 - x3;
    double c2 = x3 * y4 - x4 * y3;

    double x = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
    double y = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);

    printf("%.6f %.6f", x, y);
}

int main()
{
    Point A, B, C, D, E;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;

    double ab = segment_length(A.x, A.y, B.x, B.y);
    double bc = segment_length(B.x, B.y, C.x, C.y);
    double ca = segment_length(C.x, C.y, A.x, A.y);

    //Биссектриса делит противоположную сторону на отрезки, пропорциональные прилежащим сторонам треугольника.
    //double D_rat = coefficient(bc, ca);

    D.x = (B.x + C.x * (ab/ca)) / (1 + ab/ca);
    D.y = (B.y + C.y * (ab/ca)) / (1 + ab/ca);

    //cout << D.x << " " << D.y << endl;

    //double E_rat = coefficient(ab, ca);

    E.x = (C.x + A.x * (bc / ab)) / (1 + bc / ab);
    E.y = (C.y + A.y * (bc / ab)) / (1 + bc / ab);

    //cout << E.x << " " << E.y << endl;

    intersect(A.x, A.y, D.x, D.y, B.x, B.y, E.x, E.y);

    return 0;
}
