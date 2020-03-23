#include<iostream>
using namespace std;
int arr[7];
int main(void) {
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
	}
	int sum = 0, min = 100;
	for (int i = 0; i < 7; i++) {
		if (arr[i] % 2 != 0) {
			sum += arr[i];
			if (arr[i] < min)
				min = arr[i];
		}
	}
	if (sum != 0)
		cout << sum << endl << min << endl;
	else
		cout << -1 << endl;
	return 0;
}