#include <iostream>
#include <cmath>

using namespace std;

void printMenu();
void clearscr();
void squareOfTriangle();
void twoNumbers();
void minOfThree();
void typeOfTriangle();

int main()
{
    clearscr();
    unsigned short choice;
    while(1)
    {
        printMenu();
        cout << "Choose number: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
               squareOfTriangle();
               break;
            case 2:
                twoNumbers();
                break;
            case 3:
                minOfThree();
                break;
            case 4:
                typeOfTriangle();
                break;
            case 0:
                return 0;
            default:
                cout << "Enter a legal number" << endl;
        }
    }

    return 0;
}

void printMenu()
{
    cout << "\n";
    cout << "        MENU" << endl;
    cout << " 1 - Square of triangle" << endl;
    cout << " 2 - 2 numbers" << endl;
    cout << " 3 - Min of 3" << endl;
    cout << " 4 - Type of triangle" << endl;
    cout << " 0 - EXIT" << endl;
    cout << "\n";
}

void clearscr()
{
    for(int i = 0; i < 30; ++i)
        cout << "\n";
}

void squareOfTriangle()
{
    clearscr();
    cout << "Enter 3 numbers (length of sides of triangle)" << endl;
    double a, b, c;
    bool numbers_ok = true;
    while(numbers_ok)
    {
        cin >> a >> b >> c;
        if(((a <= 0) || (b <=0) || (c <= 0)) ||
           ((a+b) <=c) || ((a+c) <= b) || ((c+b) <= a))
            cout << "Enter a legal numbers" << endl;
        else
            numbers_ok = false;
    }
    double square, semiperimeter;
    semiperimeter = (a + b + c) / 2.0;
    square = sqrt(semiperimeter*(semiperimeter - a)*(semiperimeter - b)*(semiperimeter - c));
    cout << "Your square = " << square << endl;
}

void twoNumbers()
{
    clearscr();
    float a, b;
    cout << "Enter 2 numbers A and B" << endl;
    cin >> a >> b;
    if(a > b)
        cout << a << endl;
    else
        cout << a << "  " << b << endl;
}

void minOfThree()
{
    clearscr();
    double a, b, c;
    cout << "Enter 3 numbers A, B and C" << endl;
    cin >> a >> b >> c;
    double mine1 = a;
    if(b < mine1)
        mine1 = b;
    if(c < mine1)
        mine1 = c;
    cout << "Min of 3 is " << mine1 << endl;
}

void typeOfTriangle()
{
    clearscr();
    cout << "Enter 3 numbers (length of sides of triangle)" << endl;
    double a, b, c;
    bool numbers_ok = true;
    while(numbers_ok)
    {
        cin >> a >> b >> c;
        if(((a <= 0) || (b <=0) || (c <= 0)) ||
           ((a+b) <=c) || ((a+c) <= b) || ((c+b) <= a))
            cout << "Enter a legal numbers" << endl;
        else
            numbers_ok = false;
}
if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a))
    cout << "isosceles" << endl;
else if(a==b && a==c)
    cout << "equilateral" << endl;
else
    cout << "arbitrary" << endl;
}
