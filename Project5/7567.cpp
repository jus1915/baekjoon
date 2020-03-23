#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string n;
	cin >> n;
	int p = 10;
	for (int i = 1; i < n.length(); i++) {
		if (n[i] == '(' && n[i - 1] == '(')
			p += 5;
		else if (n[i] == ')' && n[i - 1] == ')')
			p += 5;
		else if (n[i] == '(' && n[i - 1] == ')')
			p += 10;
		else if (n[i] == ')' && n[i - 1] == '(')
			p += 10;
	}
	cout << p << endl;
	return 0;
}