#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout << "Enter a point (x,y)" << endl;
    cin >> x >> y;
    if (((y>=0)&&(x>=0) && ((x*x+y*y)<=1)) ||
       ((y<=0 && y>=-1) && (x<=0 && x>=-1)))
        cout << "Belong" << endl;
    else
        cout << "Don't belong" << endl;
    return 0;
}
