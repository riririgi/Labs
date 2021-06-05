#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int n;
    cin >> n;
    int n4 = n % 10;
    n /= 10;
    int n3 = n % 10;
    n /= 10;
    int n2 = n % 10;
    int n1 = n / 10;
    bool res = n1 + n2 == n3 * n4;
    cout << boolalpha << res;
	return 0;
}

