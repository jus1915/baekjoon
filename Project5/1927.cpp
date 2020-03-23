#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> tree;
inline void swap(int x, int y) { int tmp = tree[x]; tree[x] = tree[y]; tree[y] = tmp; }
void Delete(int top) {
	if (tree.size() - 1 < top * 2)
		return;
	else {
		if (tree.size() - 1 == top * 2) {
			if (tree[top * 2] < tree[top]) {
				swap(top * 2, top);
				Delete(top * 2);
			}
		}
		else {
			if (tree[top * 2] < tree[top * 2 + 1]) {
				if (tree[top * 2] < tree[top]) {
					swap(top * 2, top);
					Delete(top * 2);
				}
			}
			else {
				if (tree[top * 2 + 1] < tree[top]) {
					swap(top * 2 + 1, top);
					Delete(top * 2 + 1);
				}
			}
		}
	}
}
void Update(int x) {
	int parent = x / 2;
	if (tree[x] < tree[parent]) {
		swap(x,parent);
		if (parent/2!= 0) {
			Update(parent);
		}
	}
}
int main(void) {
	int n;
	cin >> n;
	tree.push_back(0);
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		if (k == 0) {
			if (tree.size() > 1) {
				swap(1, tree.size() - 1);
				cout << tree.back() << "\n";
				tree.pop_back();
				Delete(1);
			}
			else
				cout << 0 << "\n";
		}
		else {
			tree.push_back(k);
			Update(tree.size() - 1);
		}
	}

	return 0;
}