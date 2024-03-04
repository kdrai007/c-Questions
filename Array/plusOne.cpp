#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> afterAddingOne(long long res) {
  vector<int> vs;
  while (res > 0) {
    int lastDigit = res % 10;
    vs.insert(vs.begin(), lastDigit);
    res = res / 10;
  }

  return vs;
}

vector<int> PlusOne(vector<int> &arr) {
  vector<int> res;
  long long num = 0;
  for (int i = 0; i < arr.size(); i++) {
    num = num * 10 + arr[i];
  }
  num = num + 1;
  cout << num;
  cout << endl;
  return afterAddingOne(num);
}

int main() {
  vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, res;
  res = PlusOne(v);
  for (auto x : res) {
    cout << x << " ";
  }
  return 0;
}
