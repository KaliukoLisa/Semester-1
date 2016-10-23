#include <iostream>
#include <cmath>

using namespace std;

void printMenu();
void clearscr();
long int factorial(int);
double ans1(int);
double ans2(int);
double ans3(int);
double ans4(int);
double ans5(int);
double ans6(int);
double ans7(int);
double ans8(int);
double ans9(int);
double ans10(int);

int main()
{
    clearscr();
    int n;
    double ans;
    while(1)
    {
        printMenu();
        cout << "Choose a number: ";
        unsigned short choice;
        cin >> choice;
        if(choice > 10)
        {
            cout << "Enter a legal number" << endl;
            continue;
        }
        if(choice > 0)
        {
            bool isChoiceOk = true;
            while(isChoiceOk)
            {
                cout << "Enter an integer number N >= 1" << endl;
                cin >> n;
                if(n >= 1)
                    isChoiceOk = false;
                else
                    cout << "Enter a legal number" << endl;
            }
        }
        switch (choice)
        {
        case 1:
            ans = ans1(n);
            break;
        case 2:
            ans = ans2(n);
            break;
        case 3:
            ans = ans3(n);
            break;
        case 4:
            ans = ans4(n);
            break;
        case 5:
            ans = ans5(n);
            break;
        case 6:
            ans = ans6(n);
            break;
        case 7:
            ans = ans7(n);
            break;
        case 8:
            ans = ans8(n);
            break;
        case 9:
            ans = ans9(n);
            break;
        case 10:
            ans = ans10(n);
            break;
        case 0:
            return 0;
        }
    cout << "The result = " << ans << endl;
    }

    return 0;
}

void printMenu()
{
    cout << "\n" << endl;
    cout << "     MENU" << endl;
    cout << " 1 - A" << endl;
    cout << " 2 - B" << endl;
    cout << " 3 - V" << endl;
    cout << " 4 - G" << endl;
    cout << " 5 - D" << endl;
    cout << " 6 - E" << endl;
    cout << " 7 - ZH" << endl;
    cout << " 8 - Z" << endl;
    cout << " 9 - I" << endl;
    cout << " 10 - K" << endl;
    cout << " 0 - EXIT" << endl;
    cout << "\n";
}

void clearscr()
{
    for(int i = 0; i < 30; ++i)
        cout << "\n";
}

long int factorial(int k)
{
    long int res;
    if(k == 0 || k == 1)
        res = 1;
    else
        res = factorial(k-1)*k;
    return res;
}

double ans1(int n)
{
    double ans = 0;
    for(int i = 1; i <= n; ++i)
        ans += (1.0/i);
    return ans;
}

double ans2(int n)
{
    double ans = 1;
    for(int i = 1; i <= n; ++i)
        ans *= 2;
    return ans;
}

double ans3(int n)
{
    double ans = 1;
    for(int i = 1; i <= n; ++i)
        ans *= (1+1/(pow(i, 2)));
    return ans;
}

double ans4(int n)
{
    double ans = 0;
    for(int i = 1; i <= n; ++i)
        ans += pow(-1, i+1)/(i*(i+1));
    return ans;
}

double ans5(int n)
{
    double ans = 0;
    for(int i = 1; i <= n; ++i)
        ans += 1/(pow(i,5));
    return ans;
}

double ans6(int n)
{
    double ans = 0;
    for(int i = 1; i <= n; ++i)
        ans += 1/(pow(2*i+1,2));
    return ans;
}

double ans7(int n)
{
    double ans = 0;
    for(int i = 1; i <= n; ++i)
        ans += pow(-1,i)/(2*i+1);
    return ans;
}

double ans8(int n)
{
    double ans = 0;
    double numerator = 0, denominator = 0;
    for(int i = 1; i <= n; ++i)
    {
        numerator = factorial(i);
        denominator += 1.0/i;
        ans += numerator/denominator;
    }
    return ans;
}

double ans9(int n)
{
    double ans = 0;
    for(int i = 1; i <= n; ++i)
        ans = sqrt(2+ans);
    return ans;
}

double ans10(int n)
{
    double ans = 0;
    for(int i = 1; i <= n; ++i)
        ans += 1.0/(sin(i-1)+sin(i));
    return ans;
}
