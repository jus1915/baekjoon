#include<iostream>
using namespace std;
int main(void) {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	if (a + b < 2 * c) {
		cout << a * x + b * y << endl;
	}
	else {
		if (x > y) {
			cout << y * 2 * c + (x - y) * a << endl;
		}
		else if (x < y) {
			cout << x * 2 * c + (y - x) * b << endl;
		}
		else {
			cout << c * 2 * x << endl;
		}
	}
	return 0;
}