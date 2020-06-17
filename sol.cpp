#include <bits/stdc++.h>

using namespace std;

void decode() {
	char a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (i + 2 <= n - 1) {
			if (a[i] == 'x' && a[i + 1] == 'x' && a[i + 2] == 'x') {
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
