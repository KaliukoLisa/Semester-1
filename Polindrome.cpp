#include <iostream>

using namespace std;

int main()
{
   long long n;
   while (true)
   {
   cout << "Enter n= ";
   cin >> n;
   long long m = n;
   long long w = 0;
   while (m)
   {
       short o = m % 10;
       w = w * 10 + o;
       m = m/10;
    }
    if (n == w)
        cout << n << " - polindrome\n";
    else
        cout << n << " - not a polindrome\n";
    short ok;
    cout << "Write 0, if you want to exit ";
    cin >> ok;
     if (ok == 0)
        return 0;
   }

}
