#include <unordered_map>
#include <iostream>
#define ll long long
using namespace std;

int n;
int num;
int arr[100005];
int M = 0x7fffffff;
int min; 
int st;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	int en = n - 1;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (st < en) {
		if (abs(arr[st] + arr[en]) < abs(M)) {
			M = arr[st] + arr[en];
		}
		if (abs(arr[st]) < abs(arr[en])) {
			en = en - 1;
		}
		else {
			st = st + 1;
		}
	}
	cout << M;
}