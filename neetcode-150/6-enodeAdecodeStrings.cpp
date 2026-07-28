#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string encode(vector<string> &strs) {
    if (strs.empty())
      return "";
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
    int i = 0;
    while (i < str.length()) {
      int j = i;
      // Finding the delimiter idx
      while (j < str.length() && str[j] != '#') {
        cout << j << " ";
        j++;
      }

      cout << endl;
      cout << "i: " << i << " j: " << j;
      cout << endl;
      int s_length = stoi(str.substr(i, j - i));
      cout << "str_length: " << s_length << endl;
      cout << endl;
      string word = str.substr(j + 1, s_length);
      cout << "str_word: " << word;
      cout << endl;
      i = (j + 1) + s_length;
    }
    return decoded_string;
  }
};

int main() {
  Solution solution;

  vector<string> strs = {"Hello ", "World"};
  string encodedString = solution.encode(strs);
  // Encoded string
  cout << "Encoded String: " << encodedString;
  cout << endl;

  // Decoded string
  vector<string> decodedStrs = solution.decode(encodedString);

  cout << "Decoded string: ";
  for (int i = 0; i < decodedStrs.size(); i++) {
    cout << decodedStrs[i] << " ";
  }
  cout << endl;

  return 0;
}
