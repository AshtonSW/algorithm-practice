#include <bits/stdc++.h>
using namespace std;

bool isused1[20];
bool isused2[40];
bool isused3[40];

int n, cnt;

void func(int cur) { // cur은 현재의 행
	if (cur == n) {
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (isused1[i] || isused2[i + cur] || isused3[cur - i + (n - 1)]) continue;
		isused1[i] = 1;
		isused2[i + cur] = 1;
		isused3[cur - i + n - 1] = 1;
		func(cur + 1);
		isused1[i] = 0;
		isused2[i + cur] = 0;
		isused3[cur - i + n - 1] = 0;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	func(0);
	cout << cnt;
}