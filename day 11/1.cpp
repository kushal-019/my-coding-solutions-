// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant extra space.
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        set <int> set1;
        vector <int> output;
        for ( int i = 0 ; i < nums.size() ; i++ ){
                if(set1.count(nums[i])){
                    output.push_back(nums[i]);
                }
                else{
                    set1.insert(nums[i]);
                }
        }
        return output;
    }
};