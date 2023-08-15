#include <iostream>
#include <vector>
using namespace std;

bool luckyNumber(int n,int r) {
    if(r>n){
        return true;
    }
    if(n%r==0)return 0;
    else{
        return luckyNumber(n-n/r,r+1);
    }
}

int main() {
  int n;
  cout << "Check lucky number,Enter number: ";
  cin >> n;
  bool check=luckyNumber(n,2);
  if(check)cout<<"your number is lucky";
  else cout<<"your number is unlucky";
  return 0;
}
