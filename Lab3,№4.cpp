#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Enter 3 numbers, legs of triangle A, B ans C" << endl;
    double a, b, c;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;
    if(a<=0 || b<=0 || c<=0)
    {
        cout << "Error";
        return 0;
    }
    if (a+b<=c || a+c<=b || b+c<=a)
    {
        cout << "Error";
        return 0;
    }
    double p = (a+b+c)/2;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << "S = " << s;
    return 0;
}
