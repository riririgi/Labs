#include<iostream>
#include<string>
using namespace std;

int main (int argc, char *argv[]) {
	int k;
    cin >> k;
    string s = "";
    for (int i = 1; i <= k; ++i)
        s += to_string(i);
    cout << s[k-1];
	return 0;
}

