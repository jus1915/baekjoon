#include<iostream>
#include<string>
using namespace std;
string N;
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		getline(cin, N);
		if (N == "")
			getline(cin, N);
		if (N[0] >= 'a' && N[0] <= 'z')
			N[0] -=32;
		cout << N << "\n";
	}
	return 0;
}