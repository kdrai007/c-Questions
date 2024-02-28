#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> vs;
  string str = "This is simple word";
  stringstream ss(str);
  string word;
  while (ss >> word) {
    vs.push_back((word));
  }
  int lastWord = vs.back().length();
  cout << lastWord;
  return 0;
}
