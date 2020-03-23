#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int max = 0, min = 1000;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a < min)
			min = a;
		if (a > max)
			max = a;
	}
	cout << max - min << endl;
	return 0;
}