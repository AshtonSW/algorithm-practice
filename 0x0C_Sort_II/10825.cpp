#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
string s;
int kor, eng, mat;
vector <tuple<int, int, int, string>> students;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while (n--) {
        cin >> s >> kor >> eng >> mat;
        students.push_back({ -kor, eng, -mat, s });
    }
    sort(students.begin(), students.end());
    for (auto c : students) {
        cout << get<3>(c) << '\n';
    }
}
