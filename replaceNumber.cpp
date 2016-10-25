#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long a, b;
	while (true)
	{
		cout << "Enter the number" << endl;
		cin >> a;
		b = a;
		short c, k;
		cout << "Enter number that you want change" << endl;
		cin >> c;
		cout << "Enter number on what you want change" << endl;
		cin >> k;
		long long m = 0, answer = 0;
		short o;
		while (b > 0)
		{
			o = b % 10;
			if (o != c)
				answer = answer + o*pow(10, m);
			else
				answer = answer + k*pow(10, m);
            m++;
			b = b / 10;
		}
		cout << answer << endl;
		short ok;
		cout << "If continue press 1, if exit press 0" << endl;
		cin >> ok;
		if (!ok)
			return 0;
	}
}
