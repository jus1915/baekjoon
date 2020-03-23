#include<iostream>
#include<algorithm>
using namespace std;
int card[1001];
int dp[1001];
int main(void) {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> card[i];
	}
	dp[1] = card[1];
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			dp[i] = max(dp[i],max(card[i], dp[i - j] + card[j]));
		}
	}
	cout << dp[n] << endl;
	return 0;
}