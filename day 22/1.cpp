// Your task  is to implement the function atoi. The function takes a string(str) as argument and converts it to an integer and returns it.

// Note: You are not allowed to use inbuilt function.

// Example 1:

// Input:
// str = 123
// Output: 123
// Example 2:

// Input:
// str = 21a
// Output: -1
// Explanation: Output is -1 as all
// characters are not digit only.

//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int n = str.length();
        if(n==1 && str[0]==45){
            return 0;
        }
        int count = 0;
        for(int i=0;i<n;i++){
            if((str[i]>=48 && str[i]<=57) || (str[i]==45)){
                if(str[i]==45 && i!=0){
                    return -1;
                }
            }
            else{
                return -1;
            }
        }
        int ans = stoi(str);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends