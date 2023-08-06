#include<bits/stdc++.h>
using namespace std;

void pushZeroesToEnd(int arr[],int n){
int countZero=0,j=0;
for(int i=0;i<n;i++){
    if(arr[i]==0)countZero++;
    else{
        arr[j]=arr[i];
        j++;
    }
}
for(int i=0;i<countZero;i++){
    arr[j+i]=0;
    }
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
int N =4;
int arr[] = {0, 0,3,5};
pushZeroesToEnd(arr,N);
return 0;
}
