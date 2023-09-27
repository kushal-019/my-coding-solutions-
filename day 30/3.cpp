// check if redundant bracket is present or not .

// Sample Input 1 :
// 2
// (a+b)
// (a+c*b)+(c))

// Sample Output 1 :
// No
// Yes

#include <bits/stdc++.h>
using namespace std;
bool findRedundantBrackets(string &s) {
  stack<int> s1;
  bool isRedundant = true;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' ||
        s[i] == '/') {
      s1.push(s[i]);
    } else {
      if (s[i] == ')') {
        isRedundant = true;
        while (s1.top() != '(') {
          isRedundant = false;
          s1.pop();
        }
        if (isRedundant == true) {
          return true;
        }
        s1.pop();
      }
    }
  }
  return false;
}