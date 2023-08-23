// Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. There can be duplicate elements.
 

// Example 1:

// Input:
// a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
// a2[] = {11, 3, 7, 1, 7}
// Output:
// Yes
// Explanation:
// a2[] is a subset of a1[]


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    if(n<m){
        return "No";
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
    int start_a1 = 0;
    int start_a2 = 0;
    
    while(start_a1<n && start_a2<m){
        if(a1[start_a1] < a2[start_a2]){
            start_a1++;
        }
        else if(a1[start_a1] == a2[start_a2]){
            start_a1++;
            start_a2++;
        }
        else{
            return "No";
        }
    }
    return "Yes";
    
}