#include <bits/stdc++.h>
using namespace std;

int a, b, tmp, n;
int arr[23];

int main() {
	int n;
	int arr[22];
	for (int i = 1; i <= 20; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		for (int i = 0; i <= (b - a) / 2; i++) {
			tmp = arr[b - i];
			arr[b - i] = arr[a + i];
			arr[a + i] = tmp;
		}
	}
	for (int i = 1; i <= 20; i++) {
		cout << arr[i] << ' ';
	}
}