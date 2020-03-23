#include<iostream>
#include<algorithm>
using namespace std;
struct point 
{
	int col = 0;
	int x = -1;
};
point P[100000];
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> P[i].x >> P[i].col;
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int min_1 = 100000, min_2 = 100000;
		for (int j = i+1; j <= n; j++) {
			if (i != j) {
				if (P[i].col == P[j].col) {
					if (min_1 > abs(P[i].x - P[j].x)) {
						min_1 = abs(P[i].x - P[j].x);
					}
				}
			}
		}
		for (int j = i-1; j >= 0; j--) {
			if (i != j) {
				if (P[i].col == P[j].col) {
					if (min_1 > abs(P[i].x - P[j].x)) {
						min_1 = abs(P[i].x - P[j].x);
					}
				}
			}
		}
		sum += min(min_1,min_2);
	}
	cout << sum << endl;
	return 0;
}