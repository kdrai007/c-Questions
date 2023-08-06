#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

long long minCost(long long arr[], long long n) {

  if (n == 1)
    return 0;

  priority_queue<long long, vector<long long>, greater<long long>> pq;
  for (int i = 0; i < n; i++)
    pq.push(arr[i]);

  long long int a, b, ans = 0;
  while (pq.size() > 1) {
    a = pq.top();
    pq.pop();

    b = pq.top();
    pq.pop();

    long long int sum = a + b;
    ans += sum;

    pq.push(sum);
  }
  return ans;
}
int main() {
  long long t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long i, a[n];
    for (i = 0; i < n; i++) {
      cin >> a[i];
    }

    cout << minCost(a, n) << endl;
  }
  return 0;
}
