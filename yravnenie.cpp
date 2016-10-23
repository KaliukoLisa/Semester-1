#include <iostream>

using namespace std;

void clearscr();

int main()
{
    double a, b, c;
    cout << "Enter coeff." << endl;
    cout << "a (!= 0): ";
    cin >> a;
    if (a == 0)
    {
        cout << "Input error!" << endl;
        return 0;
    }
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    clearscr();
    if (a == 1)
    cout << "x^2";
    else if (a == -1)
        cout << "-x^2";
    else
        cout << a << "*x^2";
    if (b!=0)
    {
        if(b == 1)
            cout << "+ x";
        else if(b == -1)
            cout << " -x";
        else if (b > 0)
            cout << " + " << b << "*x";
        else
            cout << " " << b << "*x";
    }
    if(c!=0)
        if(c > 0)
           cout << " + " << c << endl;
        else
            cout << " " << c << endl;
        return 0;
}

void clearscr()
{
    for(int i = 0; i < 30; ++i)
        cout << "\n";
}
