#include<iostream>
using namespace std;
int node[101];
int adjacent[101][101];
int visited[101][101];
int N;
void dfs(int top,int x,int y) {
	adjacent[top][y] = 1;
	visited[top][y] = 1;
	for (int i = 1; i <= N; i++) {
		if (!visited[top][i] && adjacent[y][i])
			dfs(top, y, i);
	}
}
int main(void) {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> adjacent[i][j];
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (adjacent[i][j]) {
				dfs(i, i, j);
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << adjacent[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}