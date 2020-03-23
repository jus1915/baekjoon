#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> q;
stack<int> st;
queue<char> Q;
int arr[100000];
int main(void) {
	int n;
	int l = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		q.push(a);
	}
	while(q.size()) {
		if (st.size()&&q.front() == st.top()) {
			q.pop();
			st.pop();
			Q.push('-');
		}
		else if (q.front() >= l) {
			while (q.front()>=l) {
				st.push(l++);
				Q.push('+');
			}
		}
		else if(q.front()<st.top()){
			break;
		}
	}
	if (q.size() != 0)
		cout << "NO\n";
	else {
		while (!Q.empty()) {
			cout << Q.front() << "\n";
			Q.pop();
		}
	}
	return 0;
}