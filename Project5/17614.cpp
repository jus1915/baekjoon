#include<iostream>
using namespace std;
int main(void) {
	int n;
	long long cnt = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
			cnt++;
		if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
			cnt++;
		if (i / 100 == 3 || i / 100 == 6 || i / 100 == 9)
			cnt++;
		if (i / 1000 == 3 || i / 1000 == 6 || i / 1000 == 9)
			cnt++;
		if (i / 10000 == 3 || i / 10000 == 6 || i / 10000 == 9)
			cnt++;
		if (i / 100000 == 3 || i / 100000 == 6 || i / 100000 == 9)
			cnt++;
		if (i / 1000000 == 3 || i / 1000000 == 6 || i / 1000000 == 9)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}