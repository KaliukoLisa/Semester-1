#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double eps, a0, a1 = 1/(sqrt(2));
    cin >> eps;
    int n = 2, i = 1;
    while(abs(a1 - a0)>eps)
    {
        a0 = a1;
        a1 = n/(sqrt(n*n+1) + sqrt(n*n-1));
        i++;
        n++;
    }
    cout << "Lim = " << a0 << "    Step = " << i <<endl;
    return 0;
}
