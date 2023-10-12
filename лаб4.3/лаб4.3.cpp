#include <iostream>

using namespace std;

int main()
{
    double x, xp, xk, dx, b, a, c, f;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
 
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|     " << "x   " << "     |"
        << "f" << "        |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {

        if ((x < 0) && (b != 0))
            f = -((2 * x - c) / (c * x - a));
        else if ((x > 0) && (b == 0))
            f = (x - a) / (x - c);
        else
            f = -(x / c) + (-c / (2 * x));

        cout << "|     " << x << " |" << f << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
