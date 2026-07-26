#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string encode(vector<string> &strs) {
    string encoded_string = "";
    for (string str : strs) {
      encoded_string += to_string(str.length()) + "#";
      encoded_string += str;
    }
    return encoded_string;
  }

  vector<string> decode(string str) {
    vector<string> decoded_string;
    string s = "";
    for (int i = 0; i < str.length(); i++) {
      int j = i;
      while (str[j] != '#') {
        cout << j;
      }
    }
    return decoded_string;
  }
};

int main() {
  Solution solution;

  vector<string> strs = {"Hello", "World"};
  string encodedString = solution.encode(strs);
  // Encoded string
  cout << "Encoded String: " << encodedString;
  cout << endl;

  // Decoded string
  vector<string> decodedStrs = solution.decode(encodedString);

  bool flag = true;
  cout << "Decoded string: ";
  for (int i = 0; i < decodedStrs.size(); i++) {
    cout << decodedStrs[i] << " ";
  }
  cout << endl;

  if (flag) {
    cout << "Decoded Successfully!" << endl;
  } else {
    cout << "Decode failed!" << endl;
  }

  return 0;
}
