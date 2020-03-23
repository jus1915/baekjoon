#include<iostream>
using namespace std;
int arr[1000000];
int main(void) {
	int n;
	cin >> n;
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2])%1000000007;
	}
	cout << arr[n - 1] << endl;
	return 0;
}