#include<iostream>
#include<cmath>
using namespace std;

int main (int argc, char *argv[]) {
	double a;
    double b;
    double res;
    cin >> a >> b;
    for (a; a <= b; ++a)
    {
        res = cos(a) + 1. / tan(a);
        cout << a << "\t" << res << "\n";
    }
	return 0;
}

