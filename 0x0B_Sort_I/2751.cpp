// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2751

#include <bits/stdc++.h>
using namespace std;
int arr[10003];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, k;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> k;
		arr[k]++;
	}
	for (int i = 1; i <= 10000; i++) {
		while (arr[i] > 0) {
			cout << i << '\n';
			arr[i]--;
		}
	}
}
