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
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
		}
		long long pairs = 0;
		for (int i = 0; i < n - 1; i++) {
			// take the sum of the number of elements ahead 
			// of the current element
			pairs += (n - 1 - i);
		}
		cout << pairs << '\n';
	}
	return 0;
}
