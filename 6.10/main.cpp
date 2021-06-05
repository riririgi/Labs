#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
#include<Windows.h>
using namespace std;
typedef vector<int> lll;
ostream& operator << (ostream& out, lll a)
{
    for(long long i = a.size() - 1; i >= 0; --i)
        out << a[i];
    return out;
}
lll _remove_leading_zeros(lll a) {
    while (a.size() > 1 && a.back() == 0) {
        a.pop_back();
    }
    return a;
}
lll in(string str)
{
    lll a;
    for (long long i = str.length(); i > 0; i -= 9) {
        if (i < 9)
            a.push_back(atoi(str.substr(0, i).c_str()));
        else
            a.push_back(atoi(str.substr(i - 9, 9).c_str()));
    }
    a = _remove_leading_zeros(a);
    return a;
}
lll operator + (lll a, lll b)
{
    lll c; 
    long long r = 0;
    for(long long i = 0; i < a.size() || i < b.size(); ++i)
    {
        if(i < a.size()) 
            r += a[i];
        if(i < b.size()) 
            r += b[i];
        c.push_back(r%10); 
        r /= 10;
    }
    if(r)
        c.push_back(r);
    return c;
}
lll operator * (lll a, int b)
{
    lll c;
    if (b)
    {
        long long r = 0;
        for (auto e:a) 
        {
            r += e * b;
            c.push_back(r % 1000);
            r /= 1000;
        }
        while (r)
        {
            c.push_back(r % 1000);
            r /= 1000;
        }
    }
    else 
        c.push_back(0);
    return c;
}
lll operator * (lll a, lll b)
{
    lll c, z = {0}, e;
    if (b.size() > a.size())
        swap(a, b);
    for (auto d:b)
    {
        e = a * d;
        z = z + e;
        c.push_back(z[0]);
        z.erase(z.begin());
    }
    for (auto d:z)
        c.push_back(d);
    if (c.back() == 0)
        c = {0};
    return c;
}
lll _shift_right(lll a) {
    if (a.size() == 0) {
        a.push_back(0);
        return a;
    }
    a.push_back(a[a.size() - 1]);
    for (size_t i = a.size() - 2; i > 0; --i) 
        a[i] = a[i - 1];
    a[0] = 0;
    return a;
}
lll operator -(lll a, lll b) {
    int carry = 0;
    for (size_t i = 0; i < b.size() || carry != 0; ++i) {
        a[i] -= carry + (i < b.size() ? b[i] : 0);
        carry = a[i] < 0;
        if (carry != 0) a[i] += 10;
    }
    
    a = _remove_leading_zeros(a);
    return a;
}
lll operator / (lll a, lll b)
{
    lll res;
    lll tmp;
    res.resize(a.size());
    for (long long i = static_cast<long long>(a.size()) - 1; i >= 0; --i) {
        tmp = _shift_right(tmp);
        tmp[0] = a[i];
        tmp = _remove_leading_zeros(tmp);
        int x = 0, l = 0, r = 10;
        while (l <= r) {
            int m = (l + r) / 2;
            lll t = b * m;
            if (t <= tmp) {
                x = m;
                l = m + 1;
            }
            else r = m - 1;
        }
        
        res[i] = x;
        b = b * x;
        tmp = tmp - b;
    }
    
    res = _remove_leading_zeros(res);
    return res;
}
lll operator % (lll a, lll b)
{
    lll res = a / b;
    res = res * b;
    res = a - res;
    return res;
}
lll gcd(lll a, lll b)
{
    lll c {0};
    if (a % b == c)
        return b;
    if (b % a == c)
        return a;
    if (a > b)
        return gcd(a % b, b);
    return gcd(a, b % a);
}
lll lcm(lll a, lll b)
{
    lll res = a * b;
    return res / gcd(a, b);
}
int main (int argc, char *argv[]) {
    SetConsoleOutputCP(1251);
    cout << "Не работает, но я старалась:)";
	/*lll t;
    lll n;
    string a;
    string b;
    cin >> a >> b;
    n = in(a);
    t = in(b);
    lll l = lcm(n, t);
    n = in(a);
    t = in(b);
    lll g = gcd(n, t);
    cout << "NOD = " << g << "\n" << "NOK = " << l;*/
	return 0;
}

