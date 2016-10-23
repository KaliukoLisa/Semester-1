#include <iostream>
#include<cmath>

using namespace std;

bool isSimple(int);

int main()
{
    cout << "Enter an integer number N" << endl;
    int n;
    while(true)
    {
        cin >> n;
        if(n < 0)
            cout << "Enter a legal number" << endl;
        else
            break;
    }
    if(n==1)
    {
        cout << "Neither simple nor not simple" << endl;
        return 0;
    }
    if(isSimple(n))
        cout << "Simple" << endl;
    else
        cout << "Not simple" << endl;
    return 0;
}

bool isSimple(int n)
{
     bool is = true;
     for(int i = 2; i <= sqrt(n); ++i)
        if(n%i==0)
    {
        is = false;
        break;
    }
    return is;
}
