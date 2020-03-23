#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
void to_binary(int n) {
	vector<int> temp;
	while (n >= 1) {
		temp.push_back(n % 2);
		n /= 2;
	}
	for (int i = temp.size() - 1; i >= 0; i--) {
		v.push_back(temp[i]);
	}
}
int main(void) {
	int n;
	cin >> n;
	to_binary(n + 1);
	for (int i = 1; i < v.size(); i++) {
		if (v[i] == 0)
			cout << "4";
		else
			cout << "7";
	}
	cout << endl;
	return 0;
}