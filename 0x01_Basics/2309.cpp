// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2309

#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int a;
	int arr[9] = {};
	int sum = 0;
	int ans;
	for (int i = 0; i < 9; i++) {
		cin >> a;
		arr[i] = a;
		sum += a;
	}
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			ans = sum - (arr[i] + arr[j]);
			if (ans == 100) {
				arr[i] = -1;
				arr[j] = -1;
				sort(arr, arr + 9);
				for (int i = 2; i < 9; i++) {
					cout << arr[i] << '\n';
				}
				return 0;
			}
		}
	}
}