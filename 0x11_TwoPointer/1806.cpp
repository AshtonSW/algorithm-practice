#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[100005];
int mn = 0x7fffffff;
int leng;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int en = 0;
	int total = arr[0];
	for (int st = 0; st < n; st++) {
		while (total < s && en < n) {
			en++;
			if (en != n) total += arr[en];
		}
		if (en == n) break;
		mn = min(mn, en - st + 1);
		total -= arr[st];
	}
	if (mn == 0x7fffffff) mn = 0;
	cout << mn;
}