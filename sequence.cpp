#include <iostream>

using namespace std;

void type(bool, bool, bool);
void analysis(int);
void clearscr();

int main()
{
    long long n;
    while(true)
    {
        clearscr();
        cout << "Enter a number" << endl;
        cin >> n ;
        if(n==0)
        {
            cout << "Analysis error" << endl;
            return 0;
        }
        if(n%100 < 10)
        {
            cout << "Monotonic" << endl;
            return 0;
        }
        analysis(n);
        int choice;
        cout << "Want more? (0-NO , another number - YES)" << endl;
        cin >> choice;
        if(!choice)
            return 0;
    }

    return 0;
}

void analysis(int n)
{
    int prev = n % 10, next;
    n /= 10;
    bool eq = false, les = false, grt = false;
    while(n)
    {
        next = n % 10;
        if(next < prev)
            grt = true;
        if(next == prev)
            eq = true;
        if(next > prev)
            les = true;
        prev = next;
        n /= 10;
    }
    type(grt, eq, les);
}


void type(bool grt, bool eq, bool les)
{
    if(grt && !eq && !les)
        cout << "Increasing" << endl;
    if(grt && eq && !les)
        cout << "Not strictly increasing" << endl;
    if(!grt && eq && !les)
        cout << "Monotonic" << endl;
    if(les && eq && !grt)
        cout << "Not strictly decreasing " << endl;
    if(!grt && !eq && les)
        cout << "Decreasing" << endl;
    if(grt && eq && les || grt && !eq && les)
        cout << "Disorderly" << endl;
}

void clearscr()
{
    for(int i = 0; i < 30; ++i)
        cout << "\n";
}
