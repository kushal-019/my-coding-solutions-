// You’re given a read only array arr[] of n integers. Find out if any integer occurs more than n/3 times in the array.
// If so, return the integer. If not, return -1.
// Note: There may be multiple posible solutions, return the smallest of them.


// Example 1:

// Input: 
// n = 5
// arr[] = {1, 2, 3, 4, 2}
// Output: 
// 2
// Explanation:
// 2 occurs two times which is more than 5/3

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int repeatNum(int arr[] ,int n) {
        int count=1;
        if(n<3){
            return arr[0];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
                if(count>(n/3)){
                    return arr[i];
                }
            }
            else{
                count=1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        int arr[n];
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.repeatNum(arr,n);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends