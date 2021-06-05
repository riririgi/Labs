#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int n;
    cin >> n;
    int count = 0;
    int a[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < n; ++i)
        if (a[i] % 2 != 0)
            count++;
    double res = (double)count / n * 100;
    cout << res << '%';
	return 0;
}

