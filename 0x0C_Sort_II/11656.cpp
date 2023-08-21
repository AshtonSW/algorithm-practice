#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

string str;
vector <string> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> str;
    string ans;
    for (int i = str.length() -1; i >= 0; i--) {
        ans += str[i];
        string tmp = ans;
        reverse(tmp.begin(), tmp.end());
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for (auto s : v) {
        cout << s << '\n';
    }
}
