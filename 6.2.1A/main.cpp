#include<iostream>
using namespace std;
int main (int argc, char *argv[]) {
	double v1;
    double t;
    double v2;
    double t1;
    cin >> v1 >> t >> v2 >> t1;
    double s1 = v1 * (t + t1);
    double s2 = v2 * t1;
    if (s1 <= s2)
        cout << "Yes";
    else
        cout << "No";
	return 0;
}

