#include <iostream>

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

    return 0;
}
