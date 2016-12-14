#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter 3 sides of triangle" << endl;
    cin >> a >> b >> c;
    if(a<0 || b<0 || c<0)
    {
       cout << "Enter a legal numbers";
       return 0;
    }

    if(a==b && a==c && b==c)
    {
        cout << "Equilateral triangle";
        return 0;
    }

    if(a==b || b==c || a==c)
        cout << "Isosceles triangle";
    else
        cout << "Scalene triangle";
    return 0;
}
