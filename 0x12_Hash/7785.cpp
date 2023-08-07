#include <bits/stdc++.h>
using namespace std;

string a, b;
unordered_set <string> s;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		cin >> a >> b;
		if (b == "enter") s.insert(a);
		else s.erase(a);
	}
	vector<string> sortedlist(s.begin(), s.end()); // 요소를 벡터로 복사
	sort(sortedlist.begin(), sortedlist.end(), greater <string>());
	for (auto c : sortedlist) cout << c << '\n';
}
