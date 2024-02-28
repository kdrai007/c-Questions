#include <iostream>
#include<vector>
#include <map>
#include <string>
using namespace std;

string removeDups(string str) {
  map<char, int> mp;
  int n = str.size();
  string res = "";
  for (int i = 0; i < n; i++) {
    if (mp.find(str[i]) == mp.end()) {
      cout << str[i] << " ";
      mp[str[i]]++;
    }
  }
  return res;
}

int removeDuplicate(vector<int>arr) {
    
    map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<" ";
    }
    return 0;
}

int main() {
  //  cout << removeDups("geeksforgeeks");
    vector<int> v={5,4,2,3,5,5};
   removeDuplicate(v);

  return 0;
}
