#include <cctype>
#include <iostream>
#include <string>
using namespace std;

bool validPalindrome(string str) {
  int left = 0;
  int right = str.size() - 1;
  while (left < right) {
    if (!isalnum(str[left]))
      left++;
    if (!isalnum(str[right]))
      right--;

    if (tolower(str[left]) != tolower(str[right]))
      return false;
    left++;
    right--;
  }
  return true;
}

int main() {
  cout << "10:  Valid Palindrome:- " << endl;
  string str = "cat a t ac?";
  if (validPalindrome(str)) {
    cout << "Valid Palindrome ";
  } else {
    cout << "Non-valid palindrome";
  }
  return 0;
}
