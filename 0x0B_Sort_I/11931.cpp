#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1000005];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, greater<int>());
	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}
}
