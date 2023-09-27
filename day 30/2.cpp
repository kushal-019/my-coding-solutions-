// sort the stack without using while loop or extra space

// Sample Input 1:
// 1
// 5
// 5 -2 9 -7 3

// Sample Output 1:
// 9 5 3 -2 -7

#include <bits/stdc++.h> 
using namespace std;
void solve(stack <int>& s , int num){
	if(s.empty() || s.top()<num){
		s.push(num);
		return;
	}
	int n = s.top();
	s.pop();
	solve(s, num);

	s.push(n);
}

void sortStack(stack<int>& s)
{
	if(s.empty()){
		return ;
	}
	int n = s.top();
	s.pop();
	sortStack(s);

	solve(s,n);

	
}