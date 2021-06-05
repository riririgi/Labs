#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	double x;
    cin >> x;
    double res;
    if (x > 3)
        res = -3 * x + 9;
    else
        res = x * x * x / (x * x + 8);
    cout << res;
	return 0;
}

