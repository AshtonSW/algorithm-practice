#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    priority_queue <int> maxHeap;
    priority_queue <int, vector<int>, greater<>> minHeap;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (maxHeap.size() <= minHeap.size()) {
            maxHeap.push(num);
        }
        else {
            minHeap.push(num);
        }
        if (!minHeap.empty() && (maxHeap.top() > minHeap.top())) {
            minHeap.push(maxHeap.top()); 
            maxHeap.pop();
            maxHeap.push(minHeap.top()); 
            minHeap.pop();
        }
        cout << maxHeap.top() << '\n';
    }
}
