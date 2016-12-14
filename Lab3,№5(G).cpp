#include <iostream>
#include <cmath>

using namespace std;

int main()
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
    w = y + x - cos(x)*cos(x)/(1 + sqrt(abs(y + z)));
    cout << "W = " << w;
    return 0;
}
