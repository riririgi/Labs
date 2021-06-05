#include<iostream>
#define _USE_MATH_DEFINES
#include<cmath>
using namespace std;

int main (int argc, char *argv[]) {
	double x;
    double y;
    cin >> x >> y;
    double res = (cos(x) / (M_PI - 2 * x)) + (16 * x * cos(x * y) - 2);
    cout << res;
	return 0;
}

