// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
   void sub(vector<int>nums , int start ,vector<vector<int>>& ans , vector <int> output){
        if(start>=nums.size()){
            ans.push_back(output);
            return ;
        }

        sub(nums,start+1,ans,output);
        output.push_back(nums[start]);
        sub(nums,start+1,ans,output);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>option ;
        vector<vector<int>>ans ;
        
        int i =0;
        sub(nums,i,ans,option);
        return ans;
    }
};