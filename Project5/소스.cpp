#pragma warning(disable : 4996)
#include<cstdio>
#include<vector>
using namespace std;
int N;
int list[6];
int visited[50];
int lotto[15];
void dfs(int cnt) {
	if (cnt == 6) {
		for (int i = 0; i < 6; i++) {
			printf("%d ", list[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 0; i < N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			list[cnt] = lotto[i];
			if (cnt > 0 && list[cnt] < list[cnt - 1]) {
				visited[i] = false;
				continue;
			}
			dfs(cnt + 1);
			visited[i] = false;
		}
	}
}
int main(void) {
	while (true) {
		scanf("%d", &N);
		if (N == 0)
			break;
		else {
			for (int i = 0; i < N; i++) {
				int k;
				scanf("%d", &k);
				lotto[i] = k;
			}
			dfs(0);
			printf("\n");
		}
	}
	return 0;
}