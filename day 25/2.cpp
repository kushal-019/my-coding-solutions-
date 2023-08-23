// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1

#include<bits/c++io.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int water =0;
        int max=0;
        int n= height.size();
        int i=0 ; int  j=n-1;
        while(i<j){
                water = (j-i) * min(height[j],height[i]);
                if(water>max){
                    max= water;
                }
                if(height[i]<height[j]){
                    i++;
                }
                else{
                    j--;
                }
        }
        return max;
    }
};