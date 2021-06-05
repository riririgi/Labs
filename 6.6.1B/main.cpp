#include<iostream>
#include<cmath>
using namespace std;
bool isLess(int n)
{
    while (n)
    {
        int x = n % 10;
        n /= 10;
        if (x <= n % 10 && n != 0)
            return false;
    }
    return true;
}
void search(int n)
{
    int x = pow(10, n-1);
    while (x < pow(10, n))
    {
        if(isLess(x))
            cout << x << "\n";
        x++;
    }
}
int main (int argc, char *argv[]) {
	int n;
    cin >> n;
    search(n);
	return 0;
}

