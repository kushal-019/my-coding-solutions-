//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
    int row_start =0;
    int col_start =0;
    int col_end =m-1;
    int row_end =n-1;
    int count=0;
    while(1){
        for(int i=col_start;i<=col_end;i++){
            count++;
            if(count==k){
            return a[row_start][i];}
        }
        row_start++;
        
        
        for(int i=row_start; i<=row_end;i++){
            count++;
            if(count==k){
            return a[i][col_end];
        }}
        col_end--;
        
        
        for(int i=col_end;i>=col_start;i--){
            count++;
            if (count==k){
            return a[row_end][i];
        }
        }
        row_end--;
        
        for(int i=row_end;i>=row_start;i--){
            count++;
            if(count==k){
            return a[i][col_start];
        }}
        col_start++;
        
    }
    
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends