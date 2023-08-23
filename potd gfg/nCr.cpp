// Given two integers n and r, find nCr. Since the answer may be very large, calculate the answer modulo 109+7.

// Example 1:

// Input: n = 3, r = 2
// Output: 3
// Explaination: 3C2 = 3. 



//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        if(r==0 || r==n){
            return 1;
        }
        if(r>n){
            return 0;
        }
        if(r>n-r){
            r=n-r;
        }
        int arr[r+1];
        for(int i=0;i<=r;i++){
            arr[i]=0;
        }
        int m=1000000007;
        arr[0]=1;
        
        
        for(int i=0;i<n+1;i++){
            for(int j=min(i,r);j>0;j--){
                arr[j]=((arr[j]%m) + (arr[j-1]%m))%m;
            }
        }
        
        return arr[r];
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends