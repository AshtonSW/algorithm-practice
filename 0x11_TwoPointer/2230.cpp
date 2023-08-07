#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[100005];
int mn = 0x7fffffff;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int st, en =0;
	for (st = 0; st < n; st++) {
		while (en < n && arr[en] - arr[st] < m) en++;
		if (en == n) break;
		mn = min(arr[en] - arr[st], mn);
	}
	cout << mn;
}