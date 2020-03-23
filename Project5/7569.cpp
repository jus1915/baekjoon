#include<iostream>
#include<queue>
using namespace std;
int tomato[100][100][100];
int N, M, H;
queue<int> Q;
int yy[] = { 1,0,-1,0,0,0 };
int xx[] = { 0,1,0,-1,0,0 };
int zz[] = { 0,0,0,0,1,-1 };
int main(void) {
	cin >> N >> M >> H;
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				cin >> tomato[k][i][j];
				if (tomato[k][i][j] == 1) {
					Q.push(k); Q.push(i); Q.push(j);
				}
			}
		}
	}
	while (!Q.empty()) {
		int nz = Q.front(); Q.pop();
		int ny = Q.front(); Q.pop();
		int nx = Q.front(); Q.pop();
		for (int p = 0; p < 6; p++) {
			int z = nz + zz[p], y = ny + yy[p], x = nx + xx[p];
			if (z >= H || 0 > z) continue;
			if (y >= M || 0 > y) continue;
			if (x >= N || 0 > x) continue;
			if (tomato[z][y][x] == 0) {
				Q.push(z); Q.push(y); Q.push(x);
				tomato[z][y][x] = tomato[nz][ny][nx] + 1;
			}
		}
	}
	int ans = 0;
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (tomato[k][i][j] == 0) {
					cout << -1 << endl;
					return 0;
				}
				if (ans < tomato[k][i][j] - 1)
					ans = tomato[k][i][j] - 1;
			}
		}
	}
	cout << ans << endl;
	return 0;
}