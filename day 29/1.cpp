// delete middle element of stack without using extra space
// Sample Input 1:
// 2
// 4
// 1 2 3 4 5
// 7
// 83 74 67 49 94 8 11 1
// Sample Output 1:
// 1 2 4 5
// 83 74 67 94 8 11 1

#include <bits/stdc++.h> 
using namespace std;

void solve(stack<int>&s1, int count , int size){

   if(count == size/2){
      s1.pop();
      return;
   }
   int number = s1.top();
   s1.pop();

   solve(s1 , count+1 , size);

   s1.push(number);

}

void deleteMiddle(stack<int>&s1, int N){
	
   int count = 0;
   solve(s1 , count , N);
   return;
   
}