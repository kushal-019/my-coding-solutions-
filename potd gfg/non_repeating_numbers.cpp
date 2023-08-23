// Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers. Return in increasing order.

// Example 1:

// Input: 
// N = 2
// arr[] = {1, 2, 3, 2, 1, 4}
// Output:
// 3 4 
// Explanation:
// 3 and 4 occur exactly once.


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n = nums.size();
        vector<int> ans;
        if(n==0){
            ans.push_back(0);
            ans.push_back(0);
            return ans;
        }
       sort(nums.begin(),nums.end());
       int count=1;
       for(int i=0;i<n;i++){
           if(nums[i]==nums[i+1]){
               count++;
           }
           else if((nums[i]!=nums[i+1]) && count!=2){
               ans.push_back(nums[i]);
               count=1;
           }
           else{
               count=1;
           }
       }
       sort(ans.begin(),ans.end());
       return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends