#include <iostream>

using namespace std;

int main()
{
    cout << "Enter an integer positive number: ";
    int numb;
    cin >> numb;

    if (numb>=100)
    {
        cout << "Error!\n";
        return 0;
    }

    if (numb<=0)
    {
        cout << "Error!\n";
        return 0;
    }

    if (numb>=10 && numb<=19)
        switch(numb)
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
    int b = numb/10;

    if (numb>=20 && numb<=90)
        switch(b)
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
    int c = numb%10;

    if (numb>=20 && numb<99)
        switch(c)
    {
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
