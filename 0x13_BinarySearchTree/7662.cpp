#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int t, k;
int num;
char s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> k;
        multiset <int> ms;
        while (k--) {
            cin >> s >> num;
            auto it1 = ms.begin();
            auto it2 = ms.end();
            if (s == 'I') {
                ms.insert(num);
            }
            else if (s == 'D' && num == -1) {
                if (!ms.empty()) {
                    ms.erase(ms.begin());
                }
                else continue;
            }
            else {
                if (!ms.empty()) {
                    ms.erase(prev(ms.end()));
                }
                else continue;
            }
        }
        if (ms.empty()) cout << "EMPTY\n";
        else cout << *prev(ms.end()) << ' ' << *ms.begin() << '\n';
    }
}
