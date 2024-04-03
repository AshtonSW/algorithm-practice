#include <unordered_map>
#include <iostream>
#define ll long long
using namespace std;

unordered_map<ll, ll> m;
ll n, p, q;

ll findResult(ll n) {
	if (m[n] != 0) return m[n];

	return m[n] = findResult(n / p) + findResult(n / q);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> p >> q;
	m[0] = 1;
	cout << findResult(n);
}