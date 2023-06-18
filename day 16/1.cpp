// You are given an m x n integer matrix matrix with the following two properties:Each row is sorted in non-decreasing order.The first integer of each row is greater than the last integer of the previous row.Given an integer target, return true if target is in matrix or false otherwise. You must write a solution in O(log(m * n)) time complexity.

// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
     int i = 0 , j = m[0].size()-1;
     while(i<m.size() && j>=0)
     {
       if(m[i][j]<t) i++;
       else if(m[i][j] == t) return true;
       else  j--;
     }
      return false;
    }
};