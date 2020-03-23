#include<iostream>
using namespace std;
bool ch;
int main(void) {
	int a, b, c, t, e = 0;
	cin >> a >> b >> c >> t;
	for (int i = 1; i <= 300; i++) {
		for (int j = 1; j <= 300; j++) {
			for (int k = 1; k <= 300; k++) {
				if (a * i + b * j + c * k == t) {
					e = 1;
					break;
				}
				if (a * i == t || b * j == t || c * k == t) {
					e = 1;
					break;
				}
				if (a * i + b * j == t || b * j + c * k == t || a * i + c * k == t) {
					e = 1;
					break;
				}
			}
			if (e == 1)
				break;
		}
		if (e == 1)
			break;
	}
	cout << e << endl;
	return 0;
}