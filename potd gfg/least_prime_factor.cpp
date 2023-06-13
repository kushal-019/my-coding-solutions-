// Given a number N, find the least prime factors for all numbers from 1 to N.  The least prime factor of an integer X is the smallest prime number that divides it.
// Input: N = 6
// Output: [0, 1, 2, 3, 2, 5, 2] 
// Explanation: least prime factor of 1 = 1,
// least prime factor of 2 = 2,
// least prime factor of 3 = 3,
// least prime factor of 4 = 2,
// least prime factor of 5 = 5,
// least prime factor of 6 = 2.
// So answer is[1, 2, 3, 2, 5, 2]. 

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include<vector>;
class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        vector<int>output;
        output.push_back(0);
        output.push_back(1);
        for(int i=2;i<=n;i++){
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    output.push_back(j);
                    break;
                }
            }
        }
        return output;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        vector<int>ans = ob.leastPrimeFactor(n);
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;  
    }
    return 0;
}

// } Driver Code Ends