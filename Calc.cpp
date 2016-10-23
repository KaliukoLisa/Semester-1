#include <iostream>

using namespace std;

int main()
{
    double a,b;
    cout << "Enter numbers A and B" << endl;
    cin >> a >> b;
    cout << "Enter a sign of operation" << endl;
    char op;
    cin >> op;
    double c;
    bool ok = true;
    switch(op)
    {
          case '*':
          case '.':
            c = a * b;
            break;
          case '-':
            c = a - b;
            break;
          case '+':
            c = a + b;
            break;
          case '/':
          case ':':
            if(b == 0)
                ok = false;
            else
                c = a / b;
            break;
          default:
            ok = false;
    }
    if(ok == true)
        cout << a << " " << op << " " << b << " = " << c << endl;
    else
        cout << "Input error! (/0)" << endl;
    return 0;
}
