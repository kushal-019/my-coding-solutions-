// Given a sorted array A[] of N distinct integers from 0 to 99999. Find all the integer intervals missing from the given list.
// Note: There is always atleast 1 number missing.


// Example 1:

// Input:
// N = 4
// A = {1,5,67,88}
// Output:
// 0,2-4,6-66,68-87,89-99999
// Explanation:
// All the missing Intervals are printed.


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> printMissingIntervals(int a[], int n) {
        vector<int> ans;
        if(a[0]!=0) ans.push_back(0) , ans.push_back(a[0]-1);
        for(int i=0;i<n-1;i++){
            if(a[i+1]!=a[i]+1){
            ans.push_back(a[i]+1);
            ans.push_back(a[i+1]-1);
            }
        }
        if(a[n-1]!=99999) {
        ans.push_back(a[n-1]+1);
        ans.push_back(99999);}
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int a[n];
        for(int i=0 ; i<n ; i++)
            cin>>a[i];

        Solution ob;
        vector<int> vec = ob.printMissingIntervals(a,n);
        
        for(int i=0 ; i<vec.size() ; i+=2)
        {
            if (vec[i]==vec[i+1])
                cout<<vec[i];
            else
                cout<<vec[i]<<"-"<<vec[i+1];
            if(i!=vec.size()-2)
                cout<<",";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends