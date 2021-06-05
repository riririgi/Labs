#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int n;
    int m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    cout << "Left summs:\n";
    for (int j = 0; j < m / 2; ++j)
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
            sum += a[i][j];
        cout << sum << "\n";
    }
    cout << "Right summs:\n";
    for (int j = m / 2 + 1; j < m; j += 2)
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
            sum += a[i][j];
        cout << sum << "\n";
    }
	return 0;
}

