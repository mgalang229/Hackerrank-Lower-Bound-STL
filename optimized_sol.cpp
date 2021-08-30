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
		// apply lower_bound function (optimized version)
		auto k = lower_bound(a.begin(), a.end(), y) - a.begin();
		if (k < n && a[k] == y) {
			cout << "Yes";
		} else {
			cout << "No";
		}
		cout << " " << k + 1 << '\n';
	}
	return 0;
}
