# include <iostream>
using namespace std;
int main ()
{
    int n;
    while (true)
    {
        cin >> n;
        if (n>0)
        break;
    }
double f=1;
  for (int i=1; i<=n; i++)
  {
      f=f*i;
  }
  cout << f;
  return 0;
}
