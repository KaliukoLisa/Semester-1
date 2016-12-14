#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,x;
    cout << "Enter a coefficient: " << endl;
    cin >> a;

    if (a == 0)
    {
        cout << "Error!" << endl;
        return 0;
    }

    cin >> b >> c;

    if (a>0)
        if (a==1)
            cout << "x^2";
        else
            cout << a << "*x^2";
    if (a<0)
        if (a==-1)
            cout << "-x^2";
        else
            cout << a << "*x^2";

    if (b!=0)
        if (b>0)
            cout << "+" << b << "*x";
        else
            cout << "" << b << "*x";
    else
        cout << "";

    if (c!=0)
        if (c>0)
            cout << "+" << c << "=0";
        else
            cout << "" << c << "=0";
    else
        cout << "" << "=0";

    cout << endl;

    double x1, x2;

    x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}
