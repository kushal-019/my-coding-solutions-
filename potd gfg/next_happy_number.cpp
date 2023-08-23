//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
    private:
    bool check(int n){
        if(n==1 || n==7){
            return true;
        }
        if(n==2 || n==3 || n==4 || n==5 || n==6 || n==8 || n==9){
            return false;
        }
        int sum=0;
        while(n){
            int x=n%10;
            sum+=(x*x);
            n=n/10;
        }
        return (check(sum));
    }
public:
    int nextHappy(int n){
        while(true){
            n++;
            if(check(n)){
                return n;
            };
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends