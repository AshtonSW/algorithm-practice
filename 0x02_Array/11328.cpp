#include <bits/stdc++.h>
using namespace std;

int n;
string a, b;
int arr1[26], arr2[26];
int cnt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		for (auto c : a) {
			arr1[c - 'a']++;
		}
		for (auto c : b) {
			arr2[c - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (arr1[i] == arr2[i]) cnt++;
		}
		if (cnt == 26) cout << "Possible" << '\n';
		else cout << "Impossible" << '\n';
		fill(arr1, arr1 + 26, 0);
		fill(arr2, arr2 + 26, 0);
		cnt = 0;
	}
}