#include<iostream>
#include<string>
using namespace std;
int main(void) {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string n;
		cin >> n;
		int size = n.size();
		int left = 0, right = size - 1;
		int cnt = 0;
		while (left<=right) {
			if (n[left] == n[right]) {
				left++; right--;
			}
			else if(n[left+1]==n[right]|| n[left] == n[right - 1]){
				if (n[left + 2] == n[right - 1]) {
					left++;
					cnt++;
				}
				else {
					right--;
					cnt++;
				}
			}
			else {
				cnt += 2;
			}
			if (cnt >= 2)
				break;
		}
		if (cnt >= 2)
			cout << 2 << endl;
		else
			cout << cnt << endl;
	}
	return 0;
}