#include<iostream>
using namespace std;
void per(int* a, int n, int k)
{
    if (n == k)
    {
        for (int i = 0; i < n; ++i)
            cout << a[i] << ' ';
        cout << "\n";
    }
    else
    {
        int t;
        for (int i = k; i < n; ++i)
        {
            t = a[k];
            a[k] = a[i];
            a[i] = t;
            per(a, n, k + 1);
            t = a[k];
            a[k] = a[i];
            a[i] = t;
        }
    }
}
int main (int argc, char *argv[]) {
	int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    per(a, n, 0);
	return 0;
}
