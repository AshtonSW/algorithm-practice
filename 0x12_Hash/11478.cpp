#include <iostream>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;

unordered_map<string, bool> ma;
string str;
int cnt;
string tmp;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		tmp = str[i];
		if (ma.find(tmp) == ma.end()) ma[tmp] = true;
		for (int j = i + 1; j < str.size(); j++) {
			tmp += str[j];
			if (ma.find(tmp) == ma.end()) ma[tmp] = true;
		}
	}

	for (auto e : ma) {
		if (e.second == true) cnt++;
	}
	cout << cnt;
}