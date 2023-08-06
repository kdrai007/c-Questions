#include <bits/stdc++.h>
using namespace std;
int NumberofElementinIntersection(int a[], int b[], int n, int m) {
  unordered_set<int> s;
  int count = 0;
  for (int i = 0; i < n; i++) {
    s.insert(a[i]);
  }
  for (int i = 0; i < m; i++) {
    if (s.find(b[i]) != s.end()) {
      count++;
      s.erase(b[i]);
    }
  }
  return count;
}

int main() {
  int n = 5, m = 3;
  int a[] = {89, 24, 75, 11, 23};
  int b[] = {89, 23, 75};
  cout << NumberofElementinIntersection(a, b, n, m);
  return 0;
}
