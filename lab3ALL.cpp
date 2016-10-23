#include <iostream>

using namespace std;

bool lab3b(double, double);
bool lab3v(double, double);
bool lab3d(double, double);
void printMenu();

int main()
{
    printMenu();
    cout << "Choose a number" << endl;
    unsigned short choose;
    double x, y;
    bool isInputOk = true;
    while(isInputOk)
    {
        cin >> choose;
        if(choose <= 3 && choose >= 1)
        {
            cout << "Enter a point (x, y)" << endl;
            cin >> x >> y;
            isInputOk = false;
        }
        else if(choose == 0)
            return 0;
        else
            cout << "Repeat enter, please" << endl;
    }
    bool isBelong;
    switch(choose)
    {
    case 1:
        isBelong = lab3b(x,y);
        break;
    case 2:
        isBelong = lab3v(x,y);
        break;
    case 3:
        isBelong = lab3d(x,y);
        break;
    /* case 0:
        return 0;
    default:
        cout << "Input error" << endl;
        return 0; */
    }
    if(isBelong)
        cout << "Belong" << endl;
    else
        cout << "Don't belong" << endl;
    return 0;
}

void printMenu()
{
    cout << "\n" << "     MENU" << endl;
    cout << " 1 - lab 3b" << endl;
    cout << " 2 - lab 3v" << endl;
    cout << " 3 - lab 3d" << endl;
    cout << " 0 - EXIT" << "\n" << endl;
}

bool lab3b(double x, double y)
{
    double z = (x-1)*(x-1)+y*y;
    if((z <= 1) && ((y-x)<=0) && (y >= -0.5) ||
    ((((x+0.4)*(x+0.4)+(y+0.5)*(y+0.5)) <= 1) && ((y-x)<=0) && (y >= -0.5)))
       return true;
    else
        return false;
}


bool lab3v(double x,double y)
{
    if (((y>=0)&&(x>=0) && ((x*x+y*y)<=1)) ||
       ((y<=0 && y>=-1) && (x<=0 && x>=-1)))
       return true;
    else
        return false;
}

bool lab3d(double x, double y)
{
    if (((y>=-1 && y<=1) && (x>=0 && x<=1) && ((x*x+y*y)<=1))||
        ((y<=1) && (y>=-x-1) && (y>=-1 && y<=1) && (x>=-1 && x<=0)))
        return true;
    else
        return false;
}
