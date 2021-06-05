#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int n;
    cin >> n;
    int l = n;
    n *= 2;
    int a[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i <= l && j <= l)
                a[i][j] = 1;
            if (i <= l && j >= l)
                a[i][j] = 2;
            if (i >= l && j <= l)
                a[i][j] = 3;
            if (i >= l && j >= l)
                a[i][j] = 4;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << a[i][j] << ' ';
        cout << "\n";
    }
	return 0;
}

