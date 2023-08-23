// Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers.

// Example 1:

// Input:
// N = 2
// Arr[] = {2, 2}
// Output: 2 1
// Explanation: Repeating number is 2 and 
// smallest positive missing number is 1.


//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        sort(arr.begin(),arr.end());
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(arr[i-1]==arr[i]){
                ans.push_back(arr[i-1]);
                break;
            }
        }
        set<int>output;
        for(int i=0;i<n;i++){
            output.insert(arr[i]);
        }
        int j=1;
        for( auto i : output){
            if(i!=j){
                ans.push_back(j);
                return ans;
            }
            j++;
            
        }
        ans.push_back(j);
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends