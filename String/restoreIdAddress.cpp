#include <functional>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> restoreIp(string ips) {
  int length = ips.length();
  vector<string> validIps;
  vector<string> currentIp;
  function<void(int)> dfs = [&](int index) {
    if (index >= length && currentIp.size() == 4) {
      validIps.push_back(currentIp[0] + "." + currentIp[1] + "." +
                         currentIp[2] + "." + currentIp[3]);
      return;
    }
    if (index >= length && currentIp.size() >= 4) {
      return;
    }
    int segmentValue = 0;
    for (int i = index; i < min(length, index + 3); ++i) {
      segmentValue = segmentValue * 10 + ips[i] - '0';
      if (segmentValue > 255 || (i > index && ips[index] == '0')) {
        break;
      }
      currentIp.push_back(ips.substr(index, i - index + 1));
      dfs(i + 1);
      currentIp.pop_back();
    }
  };
  dfs(0);
  return validIps;
}

int main() {
  string ips = "25525511135";
  vector<string> vp;
  vp = restoreIp(ips);
  for (auto x : vp) {
    cout << x << " ";
  }
  return 0;
}
