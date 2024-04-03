#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int inf = 0x7fffffff;
int arrN[1000];
int arrM[1000];
vector<int> v, w;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m;
	cin >> t;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arrN[i];
	}
	cin >> m;
	for (int j = 0; j < m; j++) {
		cin >> arrM[j];
	}

	for (int i = 0; i < n; i++) {
		int sum = arrN[i];
		v.push_back(sum);
		for (int j = i + 1; j < n; j++) {
			sum += arrN[j];
			v.push_back(sum);
		}
	}
	for (int i = 0; i < m; i++) {
		int sum = arrM[i];
		w.push_back(sum);
		for (int j = i + 1; j < m; j++) {
			sum += arrM[j];
			w.push_back(sum);
		}
	}
	sort(w.begin(), w.end());

	long long ans = 0;
	for (auto e : v) {
		int dif = t - e;
		auto ub = upper_bound(w.begin(), w.end(), dif);
		auto lb = lower_bound(w.begin(), w.end(), dif);
		ans += (ub - lb);
	}
	cout << ans;

	return 0;
}