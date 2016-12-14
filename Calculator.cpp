#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    char op;
    cin >> op;

    switch(op)
    {
    case '+':
        cout << "a+b=" << a+b << endl;
        break;
    case '-':
        cout << "a-b=" << a-b << endl;
        break;
    case '*':
        cout << "a*b=" << a*b << endl;
        break;
    case ':':
    case '/':
        if (b==0)
            cout << "Error!";
        else
            cout << "a/b=" << a/b << endl;
        break;
        return 0;
    }
}
