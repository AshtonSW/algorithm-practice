#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int cnt1, cnt0;
string str;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> str;
    if (str[0] == '0') cnt0++;
    else cnt1++;
    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == str[i]) continue;
        if (str[i] == '0') cnt0++;
    }
    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] == str[i]) continue;
        if (str[i] == '1') cnt1++;
    }
    int mn = min(cnt0, cnt1);
    cout << mn;
}
