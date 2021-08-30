#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int y;
		cin >> y;
		// apply lower-bound function (find the element that is at least 'y')
		vector<int>::iterator low = lower_bound(a.begin(), a.end(), y);
		if ((low - a.begin()) + 1 <= n && a[(low - a.begin())] == y) {
			cout << "Yes";
		} else {
			cout << "No";
		}
		cout << " " << (low - a.begin()) + 1 << '\n';
	}
	return 0;
}
