#include <iostream>
#include "Complex.h";
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Complex a, b, c;
    a.Read();
    b.Read();

    cout << "Conj" << endl;
    Complex x = c.conj(a);
    x.Display();

    cout << "Sub" << endl;
    x = c.sub(a, b);
    x.Display();

    cout << "Div" << endl;
    x = c.div(a, b);
    x.Display();

    return 0;
}
