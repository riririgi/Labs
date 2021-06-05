#include<iostream>
#include<cmath>
using namespace std;

int main (int argc, char *argv[]) {
	double x;
    double y;
    cin >> x >> y;
    bool a = (y <= exp(x)) && (x * x + (y - 3) * (y - 3) <= 4.0);
    bool b = (y >= exp(x)) && ((x - 1) * (x - 1) + y * y <= 4.0);
    bool res = a || b;
    cout << boolalpha << res;
	return 0;
}

