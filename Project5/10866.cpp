#include<iostream>
#include<string>
#include<deque>
using namespace std;
deque<int> D;
int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string N;
		cin >> N;
		if (N == "push_front") {
			int a;
			cin >> a;
			D.push_front(a);
		}
		else if (N == "push_back") {
			int a;
			cin >> a;
			D.push_back(a);
		}
		else if (N == "pop_front") {
			if (D.empty())
				cout << "-1\n";
			else {
				cout << D.front() << "\n";
				D.pop_front();
			}
		}
		else if (N == "pop_back") {
			if (D.empty())
				cout << "-1\n";
			else {
				cout << D.back() << "\n";
				D.pop_back();
			}
		}
		else if (N == "size") {
			cout << D.size() << "\n";
		}
		else if (N == "empty") {
			cout << D.empty() << "\n";
		}
		else if (N == "front") {
			if (D.empty())
				cout << "-1\n";
			else
				cout << D.front() << "\n";
		}
		else if (N == "back") {
			if (D.empty())
				cout << "-1\n";
			else
				cout << D.back() << "\n";
		}
	}
	return 0;
}