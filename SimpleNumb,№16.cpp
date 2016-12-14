#include <iostream>

using namespace std;

bool isSimple(int);

int main()
{
    cout << "Enter a number: ";
    int a;
    cin >> a;

    if (a<=0)
    {
        cout << "Error!\n";
        return 0;
    }

    if (a==0)
    {
        cout << "Neither simple nor not simple";
        return 0;
    }

    if(isSimple(a))
        cout << "Simple\n";
    else
        cout << "Not simple\n";

    return 0;

}

bool isSimple(int a)
{
    bool ans;
    for (int i=2; i<a; i++)
        if(a%i==0)
        {ans = false;
        return 0;}
    else
        ans = true;
    return ans;
}
