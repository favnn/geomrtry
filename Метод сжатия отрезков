#include <iostream>
using namespace std;

struct point
{
    double x1;
    double x2;
};
point pFirst, pSecond;

double max(double a, double b)
{
    if (a > b) return a;
    else return b;
}

double min(double a, double b)
{
    if (a < b) return a;
    else return b;
}

void segment_compression(double a_x1, double a_x2, double b_x1, double b_x2)
{
    if (a_x1 > a_x2) swap(a_x1, a_x2);
    if (b_x1 > b_x2) swap(b_x1, b_x2);

    if (b_x1 < a_x1) swap(b_x1, a_x1);
    if (b_x2 < a_x2) swap(b_x2, a_x2);

    if (b_x1 < a_x1 || b_x1 < a_x2 || b_x2 < a_x1 || b_x2 < a_x1)
    {
        cout << max(a_x1, a_x2) - min(b_x1, b_x2) + 1;
        system("pause");
    }
    else if ((b_x1 >a_x1 || b_x1 > a_x2) || (b_x2 > a_x1 || b_x2 > a_x2))
    {
        cout << 0;
        system("pause");
    }
}

int main()
{
    cin >> pFirst.x1 >> pFirst.x2 >> pSecond.x1 >> pSecond.x2;

    segment_compression(pFirst.x1, pFirst.x2, pSecond.x1, pSecond.x2);

    return 0;
}
