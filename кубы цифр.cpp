#include <iostream>
#include <cmath>

using namespace std;

int Cubes(int);

int main()
{
    cout << "All three digit numbers that equal to the sum of the cubes their numbers:" << endl;
    for(int i = 100; i <= 999; ++i)
        if(Cubes(i))
            cout << i << endl;
    return 0;
}

int Cubes(int n)
{
    if(n==pow(n%10,3)+pow((n%100-n%10)/10,3)+pow((n-n%100)/100,3))
        return n;
}