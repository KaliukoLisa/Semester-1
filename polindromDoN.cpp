#include <iostream>
#include <cmath>

using namespace std;

bool isPolindrome(long long);
void clearscr();
long long initN();
void printPolindroms(long long);

int main()
{
    while(true)
    {
        clearscr();
        cout << "Enter a number" << endl;
        long long n = initN();
        cout << "\nPolindroms less than or equal " << n << endl;
        printPolindroms(n);
        cout << "Any more? (0 - NO, another number - YES)" << endl;
        int enter;
        cin >> enter;
        if(enter==0)
            return 0;
    }

    return 0;
}

bool isPolindrome(long long n)
{
    bool is = false;
    long long a = 0, temp = n;
    int rem = 0;
    while(temp)
    {
        rem = temp%10;
        a = a *10 + rem;
        temp /= 10;
    }
    if(a==n)
        is = true;
    return is;
}

void clearscr()
{
    for(int i = 0; i < 30; ++i)
        cout << "\n";
}

long long initN()
{
    long long n;
    cin >> n;
    if(n < 0)
        n = abs(n);
    return n;
}

void printPolindroms(long long n)
{
    int i = 0;
    while(i<=n)
    {
        if(isPolindrome(i))
            cout << i << endl;
        i++;
    }
}
