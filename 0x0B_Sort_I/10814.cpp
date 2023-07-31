#include <bits/stdc++.h>
using namespace std;


bool cmp(const pair<int, string>& a, const pair<int, string>& b) {
	return a.first < b.first;
}

int n, age;
string name;

vector <pair<int, string>> V;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		V.push_back({ age, name });
	}
	stable_sort(V.begin(), V.end(), cmp);
	for (auto c : V) {
		cout << c.first << ' ' << c.second << '\n';
	}
}
