#include<iostream>
using namespace std;
int w[200];
int t[200];
int n[50];
int main(void) {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> w[i] >> t[i];
		n[i] = N;
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (w[i] > w[j] && t[i] > t[j])
				n[i]--;
			else if (w[i] < w[j] && t[i] > t[j])
				n[i]--;
			else if (w[i] > w[j] && t[i] < t[j])
				n[i]--;
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << n[i] << " ";
	}
	cout << endl;
	return 0;
}