#include<iostream>
using namespace std;

int map[10000][10000];
bool check[10000];
int max[10000];
int main(void) {
	int distance[10000];
	int n, start, end;
	cin >> n >> start >> end;
	for (int i = 0; i < n - 1; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		map[a][b] = c;
		map[b][a] = c;
	}
	for (int i = 1; i <= n; i++) {
		distance[i] = 1000;
	}
	distance[start] = 0;
	check[start] = true;
	for (int i = 1; i <= n; i++) {
		if (!check[i] && map[start][i] != 0) {
			distance[i] = map[start][i];
		}
	}
	for (int i = 1; i <= n; i++) {
		int min = 1000, min_index = -1;
		for (int j = 1; j <= n; j++) {
			if (!check[j] && distance[j]!=1000) {
				if (distance[j] < min) {
					min = distance[j];
					min_index = i;
				}
			}
		}
		check[min_index] = true;
		for (int i = 1; i <= n; i++) {
			if (!check[i] && map[min_index][i] != 0) {
				if (distance[i] > distance[min_index] + map[min_index][i]) {
					distance[i] = distance[min_index] + map[min_index][i];
					if (max[i] < map[min_index][i])
						max[i] = map[min_index][i];
				}
			}
		}
	}
	cout << distance[end] - max[end] << endl;
	return 0;
}