#include<iostream>
using namespace std;
int main(void){
	int a;
	cin >> a;
	for (int i = 0; i < a * 2; i++) {
		for (int j = 0; j < a; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					cout << "*";
				}
				else
					cout << " ";
			}
			else {
				if (j % 2 == 0) {
					cout << " ";
				}
				else
					cout << "*";
			}
		}
		cout << "\n";
	}
	return 0;
}