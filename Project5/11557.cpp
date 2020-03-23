#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a;
		cin >> a;
		string n[100] = {};
		int s[100] = {};
		int max = 0, max_idx;
		for (int j = 0; j < a; j++) {
			cin >> n[j] >> s[j];
			if (s[j] > max) {
				max = s[j];
				max_idx = j;
			}
		}
		cout << n[max_idx] << endl;
	}
	return 0;
}