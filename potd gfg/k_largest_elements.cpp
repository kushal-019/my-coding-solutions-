// Given an array Arr of N positive integers and an integer K, find K largest elements from the array.  The output elements should be printed in decreasing order.
// N = 5, K = 2
// Arr[] = {12, 5, 787, 1, 23}
// Output: 787 23
// Explanation: 1st largest element in the
// array is 787 and second largest is 23.



//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    vector <int> output;
	    sort(arr,arr+n);
	    for(int i=1;i<=k;i++){
	        output.push_back(arr[n-i]);
	    }
	    return output;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends