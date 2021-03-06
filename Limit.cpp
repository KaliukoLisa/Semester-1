#include <iostream>
#include <cmath>

using namespace std;

double Posl(double);

int main()
{
	double a_n1, a_n2 = func(1);
	double e = 1e-6;
	int i = 2;
	do
    {
		a_n1 = a_n2;
		a_n2 = func(i);
		i++;
	} while (fabs(a_n2 - a_n1) > e);
	cout << "Limit of a sequence a_n = " << a_n2 << endl;
	cout << "Limit was found in step " << i - 1 << endl;
	return 0;
}

double Posl(double n)
{
	return n / (sqrt(n*n + 1) + sqrt(n*n - 1));
}
