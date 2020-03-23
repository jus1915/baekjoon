#include<iostream>
using namespace std;
int main(void) {
	int T, a, b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << "You get " << a / b << " piece(s) and your dad gets " << a % b << " piece(s)." << endl;
	}
	return 0;
}