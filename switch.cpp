#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number A (<100)" << endl;
    int a;
    cin >> a;
    if(a >= 100)
    {
        cout << "Input error!" << endl;
        return 0;
    }
    if(a >= 10 && a <= 19)
        switch(a)
    {
            case 10:
                cout << "ten" << endl;
                break;
            case 11:
                cout << "eleven" << endl;
                break;
            case 12:
                cout << "twelve" << endl;
                break;
            case 13:
                cout << "thirteen" << endl;
                break;
            case 14:
                cout << "fourteen" << endl;
                break;
            case 15:
                cout << "fifteen" << endl;
                break;
            case 16:
                cout << "sixteen" << endl;
                break;
            case 17:
                cout << "seventeen" << endl;
                break;
            case 18:
                cout << "eighteen" << endl;
                break;
            case 19:
                cout << "nineteen" << endl;
                break;
    }

    int k = a / 10;
    if(k > 1)
        switch(k)
    {
            case 2:
                cout << "twenty" << endl;
                break;
            case 3:
                cout << "thirty" << endl;
                break;
            case 4:
                cout << "forty" << endl;
                break;
            case 5:
                cout << "fifty" << endl;
                break;
            case 6:
                cout << "sixty" << endl;
                break;
            case 7:
                cout << "seventy" << endl;
                break;
            case 8:
                cout << "eighty" << endl;
                break;
            case 9:
                cout << "ninety" << endl;
                break;
    }
int l = a % 10;
if((k >1) || (k == 0))
    switch(l)
    {
         case 0:
             if(a == 0)
                cout << "zero" << endl;
             break;
         case 1:
            cout << "one" << endl;
            break;
         case 2:
            cout << "two" << endl;
            break;
         case 3:
            cout << "three" << endl;
            break;
         case 4:
            cout << "four" << endl;
            break;
         case 5:
            cout << "five" << endl;
            break;
         case 6:
            cout << "six" << endl;
            break;
         case 7:
            cout << "seven" << endl;
            break;
         case 8:
            cout << "eight" << endl;
            break;
         case 9:
            cout << "nine" << endl;
            break;
    }
return 0;
}
