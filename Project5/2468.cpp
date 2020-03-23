#include<iostream>
#include<queue>
using namespace std;
int yy[] = { -1,0,1,0 }, xx[] = { 0,1,0,-1 };
queue <int> Q;
int arr[100][100];
int ch[100][100];
int main(void) {
	int n;
	int min = 100, max = 0, cnt = 0,tmp=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] < min)
				min = arr[i][j];
			if (arr[i][j] > max)
				max = arr[i][j];
		}
	}
	for (int k = min; k <= max; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (k < arr[i][j] && !ch[i][j]) {
					Q.push(i); Q.push(j);
					ch[i][j] = ++cnt;
					while (!Q.empty()) {
						int Y, X;
						Y = Q.front(); Q.pop();
						X = Q.front(); Q.pop();
						for (int p = 0; p < 4; p++) {
							int y = Y + yy[p], x = X + xx[p];
							if (arr[y][x] > k && !ch[y][x]) {
								ch[y][x] = cnt;
								Q.push(y); Q.push(x);
							}
						}
					}
				}
			}
		}
		if (tmp > cnt) {
			cout << tmp << endl;
			break;
		}
		else {
			tmp = cnt;
			for (int a = 0; a < n; a++) {
				for (int b = 0; b < n; b++) {
					ch[a][b] = 0;
				}
			}
		}
		cnt = 0;
	}
	return 0;
}