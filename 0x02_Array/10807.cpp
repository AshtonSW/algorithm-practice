// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10807

#include <bits/stdc++.h>
using namespace std;
int N;
int arr[101];
int k;
int cnt;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> k;
	for (int i = 0; i < N; i++) {
		if (arr[i] == k) cnt++;
	}
	cout << cnt;
}
