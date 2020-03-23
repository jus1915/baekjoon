#include<iostream>
using namespace std;
int arr[50];
int main(void){
	int N, W, H;
	cin >> N >> W >> H;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (a * a <= (W * W + H * H))
			cout << "DA\n";
		else
			cout << "NE\n";

	}

	return 0;
}