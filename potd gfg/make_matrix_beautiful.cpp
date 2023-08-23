// A beautiful matrix is a matrix in which the sum of elements in each row and column is equal. Given a square matrix of size NxN. Find the minimum number of operation(s) that are required to make the matrix beautiful. In one operation you can increment the value of any one cell by 1.
// Example 1:

// Input:
// N = 2
// matrix[][] = {{1, 2},
//               {3, 4}}
// Output: 
// 4
// Explanation:
// Updated matrix:
// 4 3
// 3 4
// 1. Increment value of cell(0, 0) by 3
// 2. Increment value of cell(0, 1) by 1
// Hence total 4 operation are required.

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    // int check(int row , int col , vector<vector<int> > matrix , int size ,int sum){
    //     // checking row
    //     int curr_row_sum =0;
    //     int curr_col_sum =0;
    //     for(int i=0;i<size;i++){
    //         curr_row_sum = curr_row_sum + matrix[row][i];
    //         curr_col_sum = curr_col_sum + matrix[i][col];
    //     }
        
    //     return min(sum - curr_row_sum , sum - curr_col_sum);
        
    // }
       int findMinOpeartion(vector<vector<int> > matrix, int n){
        int maxSum=0,sum=0;
        for(int i=0; i<n; i++){
            int sum1=0,sum2=0;
            for(int j=0; j<n; j++){
                sum1+=matrix[i][j];
                sum2+=matrix[j][i];
            }
            maxSum=max(maxSum,sum1);
            maxSum=max(maxSum,sum2);
            sum+=sum1;
        }
        return (maxSum*n-sum);
    } 
    
    // int findMinOpeartion(vector<vector<int> >& matrix, int n)
    // {
    //     int row_sum =0 , col_sum =0 , sum=0 ;
    //     for(int i=0;i<n;i++){
    //         row_sum =0;
    //         col_sum =0;
    //         for(int j=0;j<n;j++){
    //             row_sum += matrix[i][j];
    //             col_sum += matrix[j][i];
    //         }
    //         sum = max(sum , row_sum );
    //         sum = max(sum, col_sum);
    //     }
    //     // cout<<sum<<" ";


    //     int to_add=0;
    //     int ans = 0;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             to_add = check(i , j ,matrix , n , sum);
    //             ans += to_add;
    //             matrix[i][j] += to_add;
    //         }
    //     }
    //     return ans;
    // } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends