#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number, which factorial you want know\n";
    cout << "n = ";
    int n;
    cin >> n;
    long long fac = 1;

    for (int i=1; i<=n; i++)
        fac*=i;
    cout << n << "! = " << fac;
    return 0;
}
