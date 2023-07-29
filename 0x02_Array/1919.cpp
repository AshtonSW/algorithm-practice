#include <bits/stdc++.h>
using namespace std;

string s1, s2;
int arr1[26];
int arr2[26];
int arr3[26];
int ans;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s1 >> s2;
	for (auto c : s1) {
		arr1[c - 'a']++;
	}
	for (auto c : s2) {
		arr2[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		arr3[i] = abs(arr1[i] - arr2[i]);
	}
	for (int i = 0; i < 26; i++) {
		ans += arr3[i];
	}
	cout << ans;
}