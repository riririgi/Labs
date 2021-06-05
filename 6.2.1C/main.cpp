#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	double x;
    double y;
    double z;
    cin >> x >> y >> z;
    if (x + y + z < 1)
    {
        if (x < y && x < z)
            x = (y + z) / 2.;
        else if (y < x && y < z)
                y = (x + z) / 2.;
            else if (z < x && z < y)
                    z = (y + x) / 2.;
    }
    else
    {
        if (x < y)
            x = (z + y) / 2.;
        else
            y = (x + z) / 2.;
    }
    cout << x << ' ' << y << ' ' << z;
	return 0;
}

