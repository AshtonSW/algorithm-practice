#include <bits/stdc++.h>
using namespace std;

int n, m;
int num[10];
int arr[10];
bool isused[10];

void func(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	int tmp = 0;
	
	for (int i = 0; i < n; i++) {
		if (!isused[i] && num[i] != tmp) {
			isused[i] = 1;
			arr[k] = num[i];			
			tmp = arr[k];
			func(k + 1);
			isused[i] = 0;
		}
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	bool chk[10005];
	for (int i = 0; i < n; i++) {
		cin >> num[i];		
	}
	sort(num, num + n);
	func(0);
}
