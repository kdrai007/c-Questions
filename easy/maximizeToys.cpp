#include <iostream>
#include<algorithm>
using namespace std;

int toyCount(int arr[],int n,int k){
   sort(arr,arr+n);
   int count=0;
   for(int i=0;i<n;i++){
       if(arr[i]<=k){
           count++; 
           k=k-arr[i];
       }
   }
   return count;
}

int main() {
  int N = 7, K = 50, arr[] = {1, 12, 5, 111, 200, 1000, 10};
  cout<<toyCount(arr,N,K);
  return 0;
}
