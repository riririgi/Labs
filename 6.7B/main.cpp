#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int n;
    cin >> n;
    int a[n];
    int b[10];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < 10; ++i)
        b[i] = 0;
    for (int i = 0; i < n; ++i)
        b[a[i] / 10]++;
    for (int i = 0; i < 10; ++i)
        cout << i * 10 << '-' << i * 10 + 9 << " - " << b[i] << "\n";
	return 0;
}

