#include<iostream>
using namespace std;
int arr[13];
bool ch[2600001];
int main(void) {
	int n;
	cin >> n; 
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		ch[arr[i]] = true;
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i; j++) {
			ch[arr[i] - arr[j]] = true;
			ch[arr[i] + arr[j]] = true;
		}
	}
	for (int i = 0; i <=sum; i++) {
		if(ch[i])

	}
	return 0;
}