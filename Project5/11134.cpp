#include<iostream>
using namespace std;
int main(void) {
	int t, n, c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> c;
		if (n % c > 0)
			cout << n / c + 1 << "\n";
		else
			cout << n / c << "\n";
	}
	return 0;
}