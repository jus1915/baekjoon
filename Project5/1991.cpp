#include<iostream>
using namespace std;
struct s
{
	char le, ri;
};
int n;
s tree[26];
void PRE(int now) {
	cout << (char)(now+65);
	if (tree[now].le != '.') {
		PRE(tree[now].le - 'A');
	}
	if (tree[now].ri != '.') {
		PRE(tree[now].ri - 'A');
	}
}
void IN(int now) {
	if (tree[now].le != '.') {
		IN(tree[now].le - 'A');
	}
	cout << (char)(now + 65);
	if (tree[now].ri != '.') {
		IN(tree[now].ri - 'A');
	}
}
void POST(int now) {
	if (tree[now].le != '.') {
		POST(tree[now].le - 'A');
	}
	if (tree[now].ri != '.') {
		POST(tree[now].ri - 'A');
	}
	cout << (char)(now + 65);
}
int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		tree[a - 'A'].le = b;
		tree[a - 'A'].ri = c;
	}
	PRE(0);
	cout << "\n";
	IN(0);
	cout << "\n";
	POST(0);
	cout << "\n";
	return 0;
}