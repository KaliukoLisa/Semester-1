#include <iostream>
#include <cmath>

using namespace std;

long long precede(long long);
long long swap(long long, int, int,int);


int main()
{
    long long number;
    cin >> number;
    cout << precede(number) << endl;
    return 0;
}

long long precede (long long n)
{
    long long temp=n;

    int prev=temp%10, next;
    temp=temp/10;
    int i=1;

    while(temp)
    {
        next = temp%10;
        if (next>prev)
            return swap(n,i,next,prev);
        prev = next;
        temp=temp/10;
        i++;
    }
    return -1;
}

long long swap(long long n, int i, int next, int prev)
{
    long long newNum;
    newNum = n -(next-prev)*pow(10,i) - (prev-next)*pow(10,i-1);
    return newNum;
}
