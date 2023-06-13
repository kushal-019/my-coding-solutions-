// Given an array A of size N. The elements of the array consist of positive integers. You have to find the largest element with minimum frequency.
// Input: 
// 5
// 2 2 5 50 1
// Output:
// 50
// Explanation :
// All elements are having frequency 1 except 2.
// 50 is the maximum element with minimum frequency.

//{ Driver Code Starts
// Initial Template for C++
#include<iostream>
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        unordered_map<int,int> mm;
        for(int i=0;i<n;i++)mm[arr[i]]++;
        int f=INT_MAX,ans=0;
        for(auto x:mm){
            if(x.second<f){
                ans=x.first;
                f=x.second;
            }
            else if(x.second==f){
                ans=max(ans,x.first);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends