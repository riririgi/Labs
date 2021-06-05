#include<string>
#include<iostream>
#include<Windows.h>
using namespace std;

int main (int argc, char *argv[]) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	string a = "";
    string b = "";
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        for (int j = 0; j < b.size(); ++j)
        {
            if (a[i] == b[j])
            {
                count++;
                break;
            }
        }
    }
    if (count == b.size())
        cout << "Можно";
    else
        cout << "Нельзя";
	return 0;
}

