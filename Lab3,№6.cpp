#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cout << "Enter 2 numbers A and B" << endl;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    if(a<b)
        cout << "A is smaller then B. A = " << a << endl;
    else
        cout << "A isn't smaller then B. A = " << a << ", B = " << b;
    return 0;
}
