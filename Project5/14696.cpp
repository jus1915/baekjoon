#include<iostream>
using namespace std;
int N;
int main(void) {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a[5] = { 0,0,0,0,0 }, b[5] = { 0,0,0,0,0 };
		int t;
		cin >> t;
		for (int j = 0; j < t; j++) {
			int p;
			cin >> p;
			a[p]++;
		}
		cin >> t;
		for (int j = 0; j < t; j++) {
			int p;
			cin >> p;
			b[p]++;
		}
		for (int j = 4; j >= 1; j--) {
			if (j == 1 && a[j] == b[j]) {
				cout << "D" << endl;
			}
			if (a[j] == b[j])
				continue;
			if (a[j] > b[j]) {
				cout << "A" << endl;
				break;
			}
			else {
				cout << "B" << endl;
				break;
			}
		}
	}
	return 0;
}