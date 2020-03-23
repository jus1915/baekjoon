#include<iostream>
using namespace std;
int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long x, y;
		cin >> x >> y;
		long long length = y - x;
		long long j = 1;
		while (j * j <= length)
			j++;
		j--;
		if (length == j * j) {
			cout << j * 2 - 1 << endl;
			continue;
		}
		long long mid = ((j * j) + (j + 1) * (j + 1)) / 2;
		if (length <= mid) 
			cout << j * 2 << endl;
		else
			cout << j * 2 + 1 << endl;
	}
	return 0;
}