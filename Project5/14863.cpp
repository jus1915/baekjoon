#include<iostream>
#include<algorithm>
using namespace std;
int N, K;
int money[101][2];
int time[101][2];
int dp[101][100001];
int main(void) {
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> time[i][0] >> money[i][0] >> time[i][1] >> money[i][1];
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			dp[i][j] = dp[i-1][j];
			int a=0, b=0;
			if (j - time[i][0] >= 0) {
				a = dp[i - 1][j - time[i][0]] + money[i][0];
			}
			if (j - time[i][1] >= 0) {
				b = dp[i - 1][j - time[i][1]] + money[i][1];
			}
			dp[i][j] = max(dp[i][j], max(a, b));
		}
	}
	cout << dp[N][K] << endl;
	return 0;
}