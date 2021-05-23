#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool can = false;
		for (int i = 1; i < n; i++) {
			if (a[i] >= a[i - 1]) {
				// check if the current element is larger than the previous element
				can = true;
				break;
			}
		}
		// the only time that we will get a false is when the sequence is in
		// descending order because the number of its inversions is (n * (n - 1)) / 2
		// (maximum) which is larger than ((n * (n - 1) / 2) - 1 as stated
		cout << (can ? "YES" : "NO") << '\n';
	}
	return 0;
}
