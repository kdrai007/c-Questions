#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

vector<int> countDistinct(int arr[], int n, int k) {
  vector<int> ans;
  unordered_map<int,int>mp;
 for(int i=0;i<k;i++){
    mp[arr[i]]++;
 }
 ans.push_back(mp.size());
 int left=0,right=0;
 for(right=k;right<n;right++){
    mp[arr[left]]--;
    if(mp[arr[left]]==0){
        mp.erase(arr[left]);
    }
    left++;
    mp[arr[right]]++;
    ans.push_back(mp.size());
 }
  return ans;
}

int main() {
  int N = 7, K = 4, A[] = {1, 2, 1, 3, 4, 2, 3};
  vector<int>ans=countDistinct(A,N,K);
  for(auto x:ans){
      cout<<x<<" ";
  }
  return 0;
}
