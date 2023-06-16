// Given a string str of lowercase alphabets. The task is to find the maximum occurring character in the string str. If more than one character occurs the maximum number of time then print the lexicographically smaller character.


// Input:
// str = testsample
// Output: e
// Explanation: e is the character which
// is having the highest frequency.


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        int arr[26]={0};
        for(int i=0;i<s.length();i++){
            int number=0;
            number=s[i]-'a';
            arr[number]++;
        }
        int maxint=-1,ans=-1;
        for(int i=0;i<26;i++){
            if(maxint<arr[i]){
                maxint=arr[i];
                ans=i;
            }
        }
        return ans+'a';
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends