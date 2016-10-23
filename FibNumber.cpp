#include <iostream>

using namespace std;

int Fib(int);

int main()
{
    int n = 0;
    int FibNum = Fib(n);
    while(FibNum < 100)
    {
        n++;
        FibNum = Fib(n);
    }
    cout << "Min three-digit number of Fibonacci sequence is " << Fib(n) << endl;
    return 0;
}

int Fib(int n)
{
    int f;
    if(n ==0 || n == 1)
        f = 1;
    else
        f = Fib(n-1)+Fib(n-2);
        return f;
}
