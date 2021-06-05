#include<iostream>
#include<iomanip>
using namespace std;

int main (int argc, char *argv[]) {
	double a;
    cin >> a;
    a /= 1024;
    cout << fixed << setprecision(12) << a << " KB\n";
    a /= 1024;
    cout << fixed << setprecision(12) << a << " MB\n";
    a /= 1024;
    cout << fixed << setprecision(12) << a << " GB\n";
    a /= 1024;
    cout << fixed << setprecision(12) << a << " TB";
	return 0;
}

