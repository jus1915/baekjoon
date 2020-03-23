#include<iostream>
#include<algorithm>
using namespace std;
typedef struct _INFO_ {
	int idx;
	int ans;
	int val;
}INFO;
INFO info[1002];
bool compVal(const INFO& a, const INFO& b) {
	if (a.val != b.val)
		return a.val < b.val;
	return a.idx < b.idx;
}
bool compIdx(const INFO& a, const INFO& b) {
	return a.idx < b.idx;
}
int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		info[i].val = a;
		info[i].idx = i;
	}
	sort(info, info + N, compVal);
	
	for (int i = 0; i < N; i++) {
		info[i].ans = i;
	}
	sort(info, info + N, compIdx);
	for (int i = 0; i < N; i++) {
		cout << info[i].ans << " ";
	}
	cout << endl;
	return 0;
}