#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n, m;
int arr[500005];
int arr2[500005];
int arr3[500005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
        arr3[i] = binary_search(arr, arr + n, arr2[i]);
    }
    for (int i = 0; i < m; i++) {
        cout << arr3[i] << ' ';
    }
}
