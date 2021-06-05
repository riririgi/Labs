#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main (int argc, char *argv[]) {
	double x;
    cin >> x;
    double s = sin(x);
    double c = cos(x);
    double l;
    if (x <= 0)
    {
        cout << "Ln(x) - No\n";
        l = -1;
    }
    else
        l = log(x);
    if (s < c && s < l && l >= 0)
    {
        cout << "sin(x) = " << s << "\n";
        if(c < l)
        {
            cout << "cos(x) = " << c << "\n";
            cout << "Ln(x) = " << l << "\n";
        }
        else
        {
            cout << "Ln(x) = " << l << "\n";
            cout << "cos(x) = " << c << "\n";
        }
    }
    else if (c < s && c < l && l >= 0)
        {
            cout << "cos(x) = " << c << "\n";
            if(s < l)
            {
                cout << "sin(x) = " << s << "\n";
                cout << "Ln(x) = " << l << "\n";
            }
            else
            {
                cout << "Ln(x) = " << l << "\n";
                cout << "sin(x) = " << s << "\n";
            }
        }
        else if (l < s && l < c && l >= 0)
        {
            cout << "Ln(x) = " << l << "\n";
            if(s < c)
            {
                cout << "sin(x) = " << s << "\n";
                cout << "cos(x) = " << c << "\n";
            }
            else
            {
                cout << "cos(x) = " << c << "\n";
                cout << "sin(x) = " << s << "\n";
            }
        }
        if (l < 0)
        {
            if(s < c)
            {
                cout << "sin(x) = " << s << "\n";
                cout << "cos(x) = " << c << "\n";
            }
            else
            {
                cout << "cos(x) = " << c << "\n";
                cout << "sin(x) = " << s << "\n";
            }
        }
	return 0;
}

