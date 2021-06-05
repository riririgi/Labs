#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int s = 2;
    int p = 2;
    int n;
    cin >> n;
    if (n == 1)
        s = 2;
    else
        for (int i = 2; i <= n; ++i)
        {
            p *= 2 * i * (2 * i - 1) / (i - 1);
            s += p;
        }
    cout << s;
	return 0;
}

