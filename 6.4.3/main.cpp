#include<iostream>
#include<cmath>
using namespace std;

int main (int argc, char *argv[]) {
	double eps;
    double a = 0;
    double an = atan(a) + 1;
    int num = 0;
    cin >> eps;
    while (abs(an - a) >= eps)
    {
        num++;
        a = an;
        an = atan(a) + 1;
    }
    cout << "Number - " << num + 1 << "\n";
    a = 0;
    an = atan(a) + 1;
    cout << "Elements - ";
    while (abs(an - a) >= eps)
    {
        cout << an << ' ';
        a = an;
        an = atan(a) + 1;
    }
    cout << an;
	return 0;
}
