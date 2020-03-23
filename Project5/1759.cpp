#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int L, C;
char n[15];
void backTracking(int pos, string str, int ja, int mo) {
	if (str.size() == L) {
		if (ja < 2 || mo < 1)
			return;
		cout << str << endl;
	}
	for (int i = pos; i < C; i++) {
		if (n[i] == 'a' || n[i] == 'e' || n[i] == 'i' || n[i] == 'o' || n[i] == 'u')
			backTracking(i + 1, str + n[i], ja, mo + 1);
		else
			backTracking(i + 1, str + n[i], ja + 1, mo);
	}
}
int main(void) {
	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		cin >> n[i];
	}
	sort(n, n + C);
	backTracking(0, "", 0, 0);
	return 0;
}