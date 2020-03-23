#include<iostream>
using namespace std;
int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		int sum = 0;
		cin >> a;
		for (int i = 1; i <= a; i += 2) {
			sum += i;
		}
		cout << sum << "\n";
	}
	return 0;
}