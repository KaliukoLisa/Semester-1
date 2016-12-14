#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cout << "Enter a point (x,y)" << endl;
    cin >> x >> y;
    double z = (x-1)*(x-1)+y*y;
    if((z <= 1) && ((y-x)<=0) && (y >= -0.5) ||
    ((((x+0.4)*(x+0.4)+(y+0.5)*(y+0.5)) <= 1) && ((y-x)<=0) && (y >= -0.5)))
        cout << "Belong" << endl;
    else
        cout << "Don't belong" << endl;
    return 0;
}
