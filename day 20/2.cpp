// you are given a string str conataining lower case letters from a to z. you have to find all non empty possible  subsequences of str.

// Sample Input 1:
// 1 
// abc
// Sample Output 1:
// a ab abc ac b bc c

#include <bits/stdc++.h>
using namespace std;

void solve(string s, int i, vector<string> &ans, string output) {
  if (i >= s.length()) {
    if (output.length() > 0)
      ans.push_back(output);
    return;
  }

  solve(s, i + 1, ans, output);
  // string a = s[i];
  output.push_back(s[i]);
  solve(s, i + 1, ans, output);
}

vector<string> subsequences(string str) {
  int start = 0;
  vector<string> ans;
  string output;

  solve(str, start, ans, output);
  return ans;
}
