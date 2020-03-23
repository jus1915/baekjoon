#include<iostream>
#include<queue>
using namespace std;
queue<int> Q;
int visited[100001];
int N, K;
int bfs() {
	visited[N] = 1;
	Q.push(N);
	while (!Q.empty()) {
		int x = Q.front(); Q.pop();
		if (x == K) return visited[x] - 1;

		if (x - 1 >= 0 && visited[x - 1] == 0) {
			Q.push(x - 1);
			visited[x - 1] = visited[x] + 1;
		}
		if (x+1<100001&&visited[x + 1] == 0) {
			Q.push(x + 1);
			visited[x + 1] = visited[x] + 1;
		}
		if (x*2<100001&&visited[x * 2] == 0) {
			Q.push(x * 2);
			visited[x * 2] = visited[x] + 1;
		}
	}
}
int main(void) {
	cin >> N >> K;
	cout << bfs() << endl;
	return 0;
}