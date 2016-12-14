#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    double x, y, z;
    cout << "Enter X, Y and Z" << endl;
    cout << "X = ";
    cin >> x;
    cout << "Y = ";
    cin >> y;
    cout << "Z = ";
    cin >> z;
    double w;
    w = sin(abs((y - sqrt(abs(x)))*(x - y/(z*z + (x*x/4)))));
    cout << "W = " << w;
    return 0;
}
