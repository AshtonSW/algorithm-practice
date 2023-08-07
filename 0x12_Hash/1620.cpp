#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

unordered_map <string, int> stringToInt;
string intToString[100005];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> intToString[i];
        stringToInt[intToString[i]] = i;
    }
    while (m--) {
        string query;
        cin >> query;
        if (isdigit(query[0]))
            cout << intToString[stoi(query)] << '\n';
        else
            cout << stringToInt[query] << '\n';
    }
}