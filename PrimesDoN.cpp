#include <iostream>
#include <cmath>

using namespace std;

bool isSimple(int);
void printSimpleNumber(int);
int initN();
void clearscr();

int main()
{
    while(true)
    {
        clearscr();
        cout << "Enter a integer number N" << endl;
        int n = initN();
        cout << "\nSimple numbers less than or equal " << n << endl;
        printSimpleNumber(n);
        cout << "Any more? (0 - NO, another number - YES)" << endl;
        int enter;
        cin >> enter;
        if(enter==0)
            return 0;
    }

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

void printSimpleNumber(int n)
{
    int i = 2;
    while(i<=n)
    {
        if(isSimple(i))
            {
                cout << i << endl;
            }
        i++;
    }
}

int initN()
{
    int n;
    while(true)
    {
        cin >> n;
        if(n < 2)
            cout << "Enter a legal number" << endl;
        else
            break;
    }
    return n;
}

void clearscr()
{
    for(int i = 0; i < 30; ++i)
        cout << "\n";
}
