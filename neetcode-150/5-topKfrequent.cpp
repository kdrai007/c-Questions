#include <iostream>
#include <queue>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

vector<int> topKfrequent_1(vector<int> &nums, int k) {
  // init, required data structures.
  unordered_map<int, int> nmap;
  priority_queue<pair<int, int>> pq;
  // to save the top k frequent nums.
  vector<int> res;

  // map the value, and their freq in nmap.
  for (int &n : nums) {
    nmap[n]++;
  }
  //
  for (auto &[num, freq] : nmap) {
    pq.push({freq, num});
  }

  while (k > 0 && !pq.empty()) {
    pair<int, int> value = pq.top();
    res.push_back(value.second);
    pq.pop();
    k--;
  }

  return res;
}

vector<int> topKfrequent_2(vector<int> &nums, int k) {
  unordered_map<int, int> nmap;
  vector<vector<int>> buckets(nums.size() + 1);

  // Let's store the nums & their frequencies to map.
  for (int num : nums) {
    nmap[num]++;
  }

  for (auto &[num, freq] : nmap) {
    buckets[freq].push_back(num);
  }

  // create an array for storing  k frequent arrays.
  vector<int> res;
  for (int i = buckets.size() - 1; i >= 0 && res.size() != k; i--) {

    for (int n : buckets[i]) {
      res.push_back(n);
    }
  }
  return res;
}

int main() {
  cout << "Top K Frequent: " << endl;
  vector<int> nums = {1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3};
  vector<int> res = topKfrequent_2(nums, 2);
  cout << "[ ";
  for (int num : res) {
    cout << num << " , ";
  }
  cout << " ]";
  return 0;
}
