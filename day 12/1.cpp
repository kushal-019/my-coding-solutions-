// An array arr a mountain if the following properties hold:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
// You must solve it in O(log(arr.length)) time complexity.
// Example 1:

// Input: arr = [0,1,0]
// Output: 1
// Example 2:

// Input: arr = [0,2,1,0]
// Output: 1
#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int a=arr.size();
    int s=0,e=a-1;
    int mid;
    while(s<e){
    mid=(s+e)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
        e=mid;
        }
       
    }
    return s;
    }
};