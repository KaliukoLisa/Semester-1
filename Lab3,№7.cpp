#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter A, B, C" << endl;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;
    cout << "C = ";
    cin >> c;
    if(a<b && a<c)
        cout << "A the smallest number";
    if(b<a && b<c)
        cout << "B the smallest number";
    if(c<a && c<b)
        cout << "C the smallest number";
    return 0;
}
