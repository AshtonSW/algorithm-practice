// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2752

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[3] = {};
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + 3);
	for (int i = 0; i < 2; i++) {
		cout << arr[i] << ' ';
	}
	cout << arr[2];
}