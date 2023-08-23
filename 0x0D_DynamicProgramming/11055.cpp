#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
int d[1005];
int arr[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    d[0] = arr[0];
    for (int i = 0; i < n; i++) {
        d[i] = arr[i];
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) d[i] = max(d[i], d[j] + arr[i]);
        }
    }
    cout << *max_element(d, d + n);
}
