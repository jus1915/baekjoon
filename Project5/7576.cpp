#include<iostream>
#include<queue>
using namespace std;
int yy[] = { -1,0,1,0 };//위 오른쪽, 아래, 왼쪽
int xx[] = { 0,1,0,-1 };
queue<int> Q;
int tomato[1000][1000];
int ans;
int main(void) {
	int M, N;
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> tomato[i][j];
			if (tomato[i][j] == 1) {
				Q.push(i); Q.push(j);
			}
		}
	}
	while (!Q.empty()) {
		int a = Q.front(); Q.pop();
		int b = Q.front(); Q.pop();
		for (int i = 0; i < 4; i++) {
			int y = a + yy[i], x = b + xx[i];
			if (y < 0 || N <= y || x < 0 || x >= M) continue;
			if (tomato[y][x]) continue;
			tomato[y][x] = tomato[a][b] + 1;
			Q.push(y); Q.push(x);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (tomato[i][j]==0) {
				cout << -1 << endl;
				return 0;
			}
			if (ans < tomato[i][j] - 1)
				ans = tomato[i][j] - 1;
		}
	}
	cout << ans << endl;
	return 0;
}