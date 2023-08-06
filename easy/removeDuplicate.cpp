#include <iostream>
#include <map>
#include <string>
using namespace std;

string removeDups(string str) {
  map<char, int> mp;
  int n = str.size();
  string res = "";
  for (int i = 0; i < n; i++) {
    if(mp.find(str[i])==mp.end()){
        cout<<str[i]<<" ";
        mp[str[i]]++;
    }
  }
  return res;
}

int main() {
  cout << removeDups("geeksforgeeks");
  return 0;
}
