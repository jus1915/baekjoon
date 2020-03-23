#include<iostream>
using namespace std;
bool ch[246913];
int main(void) {
	ch[1] = true;
	for (int i = 2; i * i < 246913; i++) {
		if (!ch[i]) {
			for (int j = i + i; j < 246913; j += i) {
				ch[j] = true;
			}
		}
	}
	int a;
	while (true) {
		int cnt = 0;
		cin >> a;
		if (a == 0)
			break;
		else {
			for (int i = a + 1; i <= 2 * a; i++) {
				if (!ch[i])
					cnt++;
			}
			cout << cnt << endl;
		}
	}
	return 0;
}