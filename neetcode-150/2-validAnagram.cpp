#include <iostream>
#include <string>
using namespace std;

bool validAnagram(string s, string t) {
  if (s.length() != t.length())
    return false;
  int sfreq[26] = {0};

  for (int i = 0; i < s.size(); i++) {
    sfreq[s[i] - 'a']++;
    sfreq[t[i] - 'a']--;
  }

  int freqCount = 0;
  for (int i = 0; i < 26; i++) {
    if (sfreq[i] < 0 || sfreq[i] > 0) {
      freqCount++;
    }
  }
  if (freqCount != 0)
    return false;
  return true;
}

int main() {
  string s = "racecar";
  string t = "rceaadc";
  cout << validAnagram(s, t);
  return 0;
}
