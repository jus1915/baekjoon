#include<iostream>
#include<vector>
using namespace std;
vector<int> arr;
int main(void) {
	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		arr.insert(arr.begin()+a, i);
	}
	for (int i = n-1; i>=0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}