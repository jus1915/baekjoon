#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(void) {
	while (true) {
		string n;
		getline(cin, n);
		if (n == "END")
			break;
		reverse(n.begin(), n.end());
		cout << n << endl;
	}
	return 0;
}