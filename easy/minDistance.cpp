#include<bits/stdc++.h>
using namespace std;

int minDistance(int a[], int n, int x, int y) {
        // code here
        vector<int>v1;
        vector<int>v2;
        for(int i=0; i<n; i++){
            if(a[i]==x) v1.push_back(i);
            else if(a[i]==y) v2.push_back(i);
        }
        if(v1.size()==0 || v2.size()==0) return -1;
        int min=INT_MAX;
        for(int i=0; i<v1.size(); i++){
            for(int j=0; j<v2.size(); j++){
                if(abs(v2[j]-v1[i])<min) min=abs(v2[j]-v1[i]);
            }
        }
        return min;
    }

int main(){
int n = 4;
int a[] = {1,2,3,2};
int x = 1, y = 2;
cout<<minDistance(a,n,x,y);
return 0;
}
