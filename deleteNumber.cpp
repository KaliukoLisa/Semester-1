#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long a, b;
	while (true)
	{
		cout << "Enter the number" << endl;
		cout << "a = ";
		cin >> a;
		b = a;
		short c;
		cout << "Enter number for delete" << endl;
		cout << "c = ";
		cin >> c;
		long long m = 0, answer = 0;
		short o;
		while (b > 0)
		{
			o = b % 10;
			if (o != c)
			{
				answer = answer + o*pow(10, m);
				m++;
			}
			else
				answer = answer + 0;
			b = b / 10;
		}
		cout << answer << endl;
		short ok;
		cout << "If continue press 1, if exit press 0 " << endl;
		cin >> ok;
		if (!ok)
			return 0;
	}
}

