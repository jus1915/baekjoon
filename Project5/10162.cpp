#include<iostream>
using namespace std;
int arr[3] = { 300,60,10 };
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < 3; i++) {
		if (n % 10 != 0) {
			cout << -1 << endl;
			break;
		}
		if (n >= arr[i]) {
			cout << n / arr[i] << " ";
			n = n % arr[i];
		}
		else
			cout << "0 ";
	}
	return 0;
}
