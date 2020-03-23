#include<iostream>
#include<cstring>
using namespace std;
string n, m;
int main(void) {
	cin >> n >> m;
	int n_l = n.length();
	int m_l = m.length();
	int k = 0;
	int i = 0;
	while (true) {
		if (m.compare(i, i + m_l, n)==0) {
			cout << "1" << endl;
			break;
		}
		i++;
		if (i == n_l - m_l) {
			cout << "0" << endl;
			break;
		}
	}
	return 0;
}