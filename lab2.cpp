#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout << "Enter a pointer (x,y)" << endl;
    cin >> x >> y;
    if(((x < -0.7) || (x > 1)) || ((y < -0.7) || (y > 1)))
    {
        cout << "Don't belong" << endl;
        return 0;
    }
    double z = x*x+y*y;
    if(((z <= 1) && (x+y) >= 0 && (y >= -0.5)))
        cout << "Belong" << endl;
    else
        cout << "Don't belong" << endl;
    return 0;
}
