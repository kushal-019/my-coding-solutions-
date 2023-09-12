// reverse a stack without extra space.

// Sample Input 1 :
// 3
// 2 1 3
// Sample Output 1 :
// 3 1 2


#include <bits/stdc++.h>
using namespace std;

void insertatbottom(stack<int> &s, int ele) {
  if (s.empty()) {
    s.push(ele);
    return;
  }
  int n = s.top();
  s.pop();
  insertatbottom(s, ele);
  s.push(n);
}

void reverseStack(stack<int> &s) {

  if (s.empty()) {

    return;
  }
  int num = s.top();
  s.pop();

  reverseStack(s);
  insertatbottom(s, num);
}
