// You are given an array of size N. Rearrange the given array in-place such that all the negative numbers occur before all non-nagative numbers.(Maintain the order of all -ve and non-negative numbers as given in the original array).
// Input:
// N = 4
// Arr[] = {-3, 3, -2, 2}
// Output:
// -3 -2 3 2
// Explanation:
// In the given array, negative numbers
// are -3, -2 and non-negative numbers are 3, 2.

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
         int arr1[n],arr2[n];
         int l=0,k=0;
            for(int i=0;i<n;i++){
                if(arr[i]<0){
                    arr1[k]=arr[i];
                    k++;
                }
                else{
                    arr2[l]=arr[i];
                    l++;
                }
            }
        for(int i=0;i<k;i++){
            arr[i]=arr1[i];
        }
        int p=0;
        for(int i=k;i<n;i++){
            arr[i]=arr2[p];
            p++;
        }
        //  return *arr;
            // Your code goes here
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends