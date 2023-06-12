// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Input: x = 123
// Output: 321
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int n) {
        int ans=0;
        while(n!=0){
        int x=n%10;
        if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
          return 0;
        }
        ans=(ans*10)+x;
        n/=10;
        }
    return ans;
    }
};