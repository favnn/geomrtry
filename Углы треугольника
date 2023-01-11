#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
#define PI 3.14159265

double maximum(double a, double b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

double segment_length(double X1, double Y1, double X2, double Y2)
{
    return sqrt(((X2 - X1) * (X2 - X1)) + ((Y2 - Y1) * (Y2 - Y1)));
}

double get_degree_from_acos(double cos_value)
{
    return acos(cos_value) * (180.0 / PI);
}

double cos(double near_side_1, double near_side_2, double opp_side)
{
    return (((near_side_1 * near_side_1) + (near_side_2 * near_side_2) - (opp_side * opp_side)) / (2 * near_side_1 * near_side_2));
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double a = segment_length(x1, y1, x2, y2);
    double b = segment_length(x2, y2, x3, y3);
    double c = segment_length(x3, y3, x1, y1);

    printf("%.6f", maximum(maximum(get_degree_from_acos(cos(a, c, b)), get_degree_from_acos(cos(a, b, c))), get_degree_from_acos(cos(b, c, a))));
}
