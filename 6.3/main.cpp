#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int n;
    double l;
    double res;
    cin >> n >> l;
    switch(n)
    {
    case 1:
        res = l / 10.;
        break;
    case 2:
        res = l * 1000;
        break;
    case 3:
        res = l;
        break;
    case 4:
        res = l / 1000.;
        break;
    case 5:
        res = l / 100.;
        break;
    default:
        cout << "Unknown number";
        break;
    }
    cout << res;
	return 0;
}

