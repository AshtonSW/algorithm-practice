// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10989

#include <bits/stdc++.h>
using namespace std;
int arr[10000001];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + a);
	for (int i = 0; i < a; i++) {
		cout << arr[i] << '\n';
	}
}
