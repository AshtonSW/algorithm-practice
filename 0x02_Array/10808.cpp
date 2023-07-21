// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10808

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int arr[26] = {};
	for (auto c : str) {
		arr[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
}