#include<iostream>
using namespace std;
int arr[100000];
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int cnt = 1, k;
	k = arr[n - 1];
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] > k) {
			cnt++;
			k = arr[i];
		}
	}
	cout << cnt << endl;
	return 0;
}