#include<iostream>

using namespace std;

#define M (1000000007)

int main() {
	int f1, f2;

	cin >> f1 >> f2;

	int f3 = f2  - f1;

	int n;
	cin >> n;

	switch(n % 6) {
		case 1:
		cout << ((f1 % M) + M) % M; return 0;
		case 4:
		cout << (((-f1) % M) + M) % M; return 0;
		case 2:
		cout << ((f2 % M) + M) % M; return 0;
		case 5:
		cout << (((-f2) % M) + M) % M; return 0;
		case 0:
		cout << (((-f3) % M) + M) % M; return 0;
		case 3:
		cout << ((f3 % M) + M) % M; return 0;
	}
}
