#include <unordered_map>
#include <iostream>
using namespace std;

bool tripletSum(int arr[], int n, int x) {
    unordered_map<int,int> m;
       
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(m[x-arr[i]-arr[j]]!=0){
                   return true;
               }
           }
           m[arr[i]]++;
       }
       
       return false;
}

int main() {
  int n = 6, X = 13, arr[] = {1, 4, 45, 6, 10, 8};
  if (tripletSum(arr, n, X))
    cout << "It's triplet";
  else
    cout << "Not a triplet";
  return 0;
}
