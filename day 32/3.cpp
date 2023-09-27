// Longest Valid Parentheses

// Companies
// Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses 
// substring
 
// Example 1:

// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".
// Example 2:

// Input: s = ")()())"
// Output: 4
// Explanation: The longest valid parentheses substring is "()()".
// Example 3:

// Input: s = ""
// Output: 0


// class Solution {
// public:
//     int longestValidParentheses(string s) {
//         stack <char> st ; 
//         int maxi = 0;
//         int count =0;
//         int len = s.length();
//         int i = 0;
//         while(i< len){
//             if(s[i]=='('){
//                 st.push(s[i]);
//             }
//             else if (s[i]==')' && !st.empty()){
                
//                 if(st.top()=='('){
//                     st.pop();
//                     count += 2;
//                 maxi = max(count , maxi);
//                 }
//                 else{
//                 maxi = max(count , maxi);
//                 count = 0;
//                 }
//             }
//             else{
//                 count=0;
//             }
//             i++;
//         }
//         return maxi;
//     }
// };

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        
        stack<int>st;
        int trash = 0;
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(s[i-1]=='('){
                st.push(i);
            }
            else{
                if(st.empty()){
                    trash= i;
                    continue;
                }
                else{
                    st.pop();
                }
                if(st.empty()){
                    ans= max(ans, (int)(i-trash));
                }
                else{
                    ans= max(ans, (int)(i-st.top()));
                } 
            }
            
        }
        return ans;
    }
};