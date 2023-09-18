#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> findAndREplace(int arr[],int N){
    vector<int>ans;
    sort(arr,arr+N);
    int duplicateNumber=0,missingNumber=0;
    for(int i=1;i<N;i++){
        if(arr[i]==arr[i-1])
            duplicateNumber=arr[i];
    }
    for(int i=0;i<N;i++){
        if(arr[i]!=i and i!=duplicateNumber)
            missingNumber=i;
    }
    ans.push_back(duplicateNumber);
    ans.push_back(missingNumber);
    return ans;
}

vector<int> optamizeSolution(int arr[],int n){
int num1=-1,num2=-1,sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            int ele = abs(arr[i]);
            if(arr[ele-1]<0){
                num1 = ele;
            }
            else{
            arr[ele-1] *= (-1);
            }
            sum1+=ele;
            sum2+=i+1;
        }
        num2 = (sum2 - sum1) + num1;

        return {num1,num2};
}

int main() {
    int Arr[] = {13, 33, 43, 16, 25, 19, 23, 31, 29, 35, 10, 2, 32, 11, 47, 15, 34, 46, 30, 26, 41, 18, 5, 17, 37, 39, 6, 4, 20, 27, 9, 3, 8, 40, 24, 44, 14, 36, 7, 38, 12, 1, 42, 12, 28, 22, 45};
    int N=sizeof(Arr)/sizeof(Arr[0]);
    vector<int> v=optamizeSolution(Arr,N);
    for(auto x:v){
        cout<<x<<endl;
    }

    return 0;
}

