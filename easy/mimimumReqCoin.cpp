#include <iostream>
#include <vector>
using namespace std;

vector<int> minPartition(int Target) {
  vector<int> notes = {2000, 500, 100, 50, 20, 10, 5, 2, 1};
  vector<int> ans;
  for (int i = 0; i < notes.size(); i++) {
    while (Target >= notes[i]) {
      Target -= notes[i];
      ans.push_back(notes[i]);
    }
  }
  return ans;
}

int main() {
  vector<int> ans = minPartition(336);
  for (auto x : ans) {
    cout << x << " ";
  }
  return 0;
}
