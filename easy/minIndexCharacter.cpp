#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int minIndexCharacter(string str, string patt) {
    int index=-1;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        index=patt.find(ch);
        if(index>=1)return i;
    }
    return -1;
}

int main() {
  string str = "geeksforgeeks", patt = "set";
  cout << minIndexCharacter(str, patt);
  return 0;
}
