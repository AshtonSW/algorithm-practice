#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

void parse(string& tmp, deque<int>& dq) {
    int cur = 0;
    for (int i = 1; i + 1 < tmp.size(); i++) {
        if (tmp[i] == ',') {
            dq.push_back(cur);
            cur = 0;
        }
        else {
            cur = 10 * cur + (tmp[i] - '0');
        }
    }
    if (cur != 0) {
        dq.push_back(cur);
    }
}

void printAns(deque<int>& dq) {
    cout << "[";
    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i];
        if (i + 1 < dq.size()) {
            cout << ',';
        }
    }
    cout << ']' << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;

    cin >> tc;
    while (tc--) {
        deque<int> dq;
        int n;
        bool rev = false;
        bool isError = false;
        string query, tmp;
        cin >> query;
        cin >> n;
        cin >> tmp;
        parse(tmp, dq);
        for (auto c : query) {
            if (c == 'R') {
                rev = !rev;
            }
            else {
                if (dq.empty()) {
                    isError = !isError;
                    break;
                }
                if (!rev) dq.pop_front();
                else dq.pop_back();
            }
        }

        if (isError) {
            cout << "error" << '\n';            
        }
        else {
            if(rev) reverse(dq.begin(), dq.end());
            printAns(dq);
        }

    }
}
