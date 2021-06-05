#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
void mul(int a, int b, int c, int d)
{
    int num = a * c;
    int den = b * d;
    int g = gcd(num, den);
    num /= g;
    den /= g;
    cout << num << " / " << den;
}
int main (int argc, char *argv[]) {
	int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;
    mul(a, b, c, d);
	return 0;
}

