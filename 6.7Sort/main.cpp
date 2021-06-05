#include<iostream>
using namespace std;
int main (int argc, char *argv[]) {
	int n;
    int m;
    cin >> n;
    double a[n];
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    if (n > 1)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            int max = a[i];
            int maxI = i;
            for (int j = i + 1; j < n; ++j)
            {
                if (a[j] > max)
                {
                    max = a[j];
                    maxI = j;
                    if (maxI != i)
                    {
                        int t = a[maxI];
                        a[maxI] = a[i];
                        a[i] = t;
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; ++i)
        cout << a[i] << ' ';
	return 0;
}

