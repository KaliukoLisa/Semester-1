#include <iostream>
#include <cmath>

using namespace std;

double SinH(double, double);

int main()
{
    double x, eps;
    cout << "Enter a X and EPSILON" << endl;
    cin >> x >> eps;
    cout << "Our function = " << SinH(x, eps) << "\nLib function = " << sinh(x)<< endl;
    return 0;
}

double SinH(double x, double eps)
{
    double res = 0, term = x;
    int i = 1;
    while(fabs(term) > eps)
    {
        res += term;
        i+=2;
        term *= x*x /(i*(i-1));
    }

    return res;
}
