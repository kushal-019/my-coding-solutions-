//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    
    int low =0; 
    int high = n-1;
    vector<int> ans(2,-1);
    while(low<=high)
    {
        if(arr[low]!=x)low++;
        if(arr[high]!=x)high--;
        
        if(arr[low] == x && arr[high]==x) 
        {
          ans[0]=low;
          ans[1]=high;
          return ans;
        }
    }
    
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends