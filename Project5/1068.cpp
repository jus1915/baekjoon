#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> graph[51];
bool check[51];
int n, result = 0;
void bfs(int start) {
	queue<int> q;
	q.push(start);

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		int cnt = 0;
		for (int i = 0; i < graph[node].size(); i++) {
			int next = graph[node][i];
			if (!check[next]) {
				cnt++;
				check[next] = true;
				q.push(next);
			}
		}
		if (cnt == 0)
			result++;
	}
}
int main(void) {
	int root;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;
		if (d == -1) {
			root = i;
			check[i] = true;
			continue;
		}
		graph[i].push_back(d);
		graph[d].push_back(i);
		
	}
	int node;
	cin >> node;
	if (node != root) {
		check[node] = true;
		bfs(root);
	}
	cout << result << endl;
	return 0;
}