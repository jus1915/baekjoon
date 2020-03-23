#include<iostream>
using namespace std;
int main(void) {
	long long a, b, p = 1;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		p *= 10;
	}
	if (a % p >= p / 2)
		cout << ((a / p)+1) * p << "\n";
	else
		cout << (a / p) * p << "\n";
	return 0;
}