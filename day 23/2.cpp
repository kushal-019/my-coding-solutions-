// Given an array arr[] of N integers and replace every element with the least greater element on its right side in the array. If there are no greater elements on the right side, replace it with -1. 

// Example 1:

// Input:
// arr[] = {8, 58, 71, 18, 31, 32, 63, 92, 43, 3, 91, 93, 25, 80, 28}
// Output: {18, 63, 80, 25, 32, 43, 80, 93, 80, 25, 93, -1, 28, -1, -1}
// Explanation: 
// The least next greater element of 8 is 18.
// The least next greater element of 58 is 63 and so on.

//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
       vector<int> findLeastGreater(vector<int>& arr, int n) {
        set<int>s;
        vector<int>v;
        for(int i=n-1;i>=0;i--)
        {
            s.insert(arr[i]);
            auto it=s.find(arr[i]);
            if(it==s.end())
            {
                v.push_back(-1);
            }
            else
            {
                it++;
                if(it==s.end())
                v.push_back(-1);
                else
                {
                    v.push_back(*(it));
                }
            }
        }
        reverse(v.begin(),v.end());
        return v;

        

    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends