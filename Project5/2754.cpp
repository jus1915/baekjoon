#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string n;
	cin >> n;
	if (n == "A+") cout << "4.3\n";
	else if (n == "A0") cout << "4.0\n";
	else if (n == "A-") cout << "3.7\n";
	else if (n == "B+") cout << "3.3\n";
	else if (n == "B0") cout << "3.0\n";
	else if (n == "B-") cout << "2.7\n";
	else if (n == "C+") cout << "2.3\n";
	else if (n == "C0") cout << "2.0\n";
	else if (n == "C-") cout << "1.7\n";
	else if (n == "D+") cout << "1.3\n";
	else if (n == "D0") cout << "1.0\n";
	else if (n == "D-") cout << "0.7\n";
	else cout << "0.0\n";
	return 0;
}