#pragma warning(disable: 4996)

#include<cstdio>
#include<queue>
using namespace std;

priority_queue <int, vector<int>, less<int> > pq;

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		if (k == 0) {
			if (pq.empty())
				printf("0\n");
			else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else
			pq.push(k);
	}

	return 0;
}