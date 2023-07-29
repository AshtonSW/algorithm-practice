#include <bits/stdc++.h>
using namespace std;

int n, x;
int arr[100005];
int cnt;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> x;
	sort(arr, arr + n); // 1 2 3 5 7 10 11 12
	int en = n - 1;
	for (int st = 0; st < n; st++) {
		while (en > st && arr[st] + arr[en] > x) en--;
		if (en > st && arr[st] + arr[en] == x) cnt++;
	}
	cout << cnt;
}