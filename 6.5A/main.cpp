#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
	for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            if (11 * j + 2 * i == 100)
                cout << 10 * i + j << "\n";
	return 0;
}

