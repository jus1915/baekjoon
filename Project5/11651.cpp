#include<iostream>
#include<algorithm>
using namespace std;
struct point
{
	int x;
	int y;
};
bool comY(const point& a, const point& b) {
	if (a.y != b.y)
		return a.y < b.y;
	else
		return a.x < b.x;
}
int main(void) {
	int T;
	point k[100000];
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k[i].x >> k[i].y;
	}
	sort(k, k + T, comY);
	for (int i = 0; i < T; i++) {
		cout << k[i].x << " " << k[i].y <<"\n";
	}
	return 0;
}