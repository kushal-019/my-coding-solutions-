// Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

// Example 1:

// Input:
// N = 7, X = 2
// Arr[] = {1, 1, 2, 2, 2, 2, 3}
// Output: 4
// Explanation: 2 occurs 4 times in the
// given array.

//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
    int search(int arr[] ,int start , int end,int x){
        int mid = (start+end)/2;
        if(mid==end || mid==start){
            if(arr[mid] == arr[end]){
                return mid;
            }
            if(arr[mid] == arr[start]){
                return mid;
            }
            return -1;
        }
        else if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            search(arr , mid, end , x);
        }
        else if(arr[mid]>x){
            search(arr , start , mid , x);
        }
    }
    
    

	int count(int arr[], int n, int x) {
	    int index = search(arr , 0 , n , x);
	    if(index==-1){
	        return 0;
	    }
	    int count=0;
	    int remember =index+1;
	    int left = arr[index];
	    int right = arr[index+1];
	    while(left == x){
	        count++;
	        index--;
	        left = arr[index];
	    }
	    index = remember;
	    while(right == x){
	        count++;
	        index++;
	        right = arr[index];
	    }
	    return count;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends