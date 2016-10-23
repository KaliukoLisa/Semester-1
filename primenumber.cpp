#include <iostream>
#include <cmath>

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
    int k = 0, i = 2;
    cout << "\nFirst " << n << " simple numbers:" << endl;
    while(k < n)
    {
        if(isSimple(i))
           {
             cout << i << endl;
                k++;
           }
        i++;
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
