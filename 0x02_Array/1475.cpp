#include <bits/stdc++.h>
using namespace std;

string str;
int arr[10];
int mx;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> str;
	for (auto c : str) {
		arr[c - '0']++;
	}
	if ((arr[6] + arr[9]) % 2 == 0) {
		arr[9] = (arr[9] + arr[6]) / 2;
		arr[6] = 0;
	}
	else {
		arr[9] = ((arr[9] + arr[6]) / 2) + 1;
		arr[6] = 0;
	}
	mx = *max_element(arr, arr + 10);
	cout << mx;
}