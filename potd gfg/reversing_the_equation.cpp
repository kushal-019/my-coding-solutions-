//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
      string reverseEqn (string s)
        {
            //may2021
            
            string result="", temp="";
            
            for(int i=s.size()-1 ; i>=0 ; i--)
             {
                 if(s[i]>=48 && s[i]<=57)
                   temp=s[i]+temp;
                 else
                  {
                      result+=temp+s[i];
                      temp="";
                  }
             }
    
            return result+temp;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends