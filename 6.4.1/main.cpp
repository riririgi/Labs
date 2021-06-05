#include<iostream>
#include<Windows.h>
using namespace std;

int main (int argc, char *argv[]) {
    SetConsoleOutputCP(1251);
    int f = 1;
    for (int k = 1; k < 10; ++k)
        for (int o = 0; o < 10; ++o)
            for (int t = 0; t < 10; ++t)
                if ((k * 100 + o * 10 + t) + (k * 100 + o * 10 + t) == (t * 100 + o * 10 + k))
                {
                    cout << "KОТ+KOT=TOK - " << k * 100 + o * 10 + t << '+' << k * 100 + o * 10 + t << '=' << t * 100 + o * 10 + k << "\n";
                    f = 0;
                }
    if(f)
        cout << "Нет решений";
	return 0;
}

