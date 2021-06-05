#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	int n;
    cin >> n;
    int sumMax = 0;
    int max = 0;
    int j;
    for (int i = 2; i <= n; ++i)
    {
        int k = 2;
        for (j = 2; j < i; ++j)
            if(i % j == 0)
                k++;
        if (k > sumMax)
        {
            sumMax = k;
            max = j;
        }
    }
    cout << max << " - " << sumMax;
	return 0;
}

