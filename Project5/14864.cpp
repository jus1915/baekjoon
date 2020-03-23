#include<iostream>
using namespace std;
int L[100001];
int R[100001];
int arr[100001];
bool ch[100001];
bool ans;
int main(void) {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		R[a]++;
		L[b]++;
	}
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
		arr[i] -= L[i];
		arr[i] += R[i];
		ch[arr[i]] = true;
	}
	for (int i = 1; i <= n; i++) {
		if (!ch[i]) ans = true;
	}
	if (ans)
		cout << -1 << endl;
	else {
		for (int i = 1; i <= n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}