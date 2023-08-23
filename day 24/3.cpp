// Rat in the maze problem

// Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
// Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

// Example 1:

// Input:
// N = 4
// m[][] = {{1, 0, 0, 0},
//          {1, 1, 0, 1}, 
//          {1, 1, 0, 0},
//          {0, 1, 1, 1}}
// Output:
// DDRDRR DRDDRR
// Explanation:
// The rat can reach the destination at 
// (3, 3) from (0, 0) by two paths - DRDDRR 
// and DDRDRR, when printed in sorted order 
// we get DDRDRR DRDDRR.

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
private:
bool issafe(int newx, int newy,vector<vector<bool>> &visited,vector < vector < int >> & arr,int n){
    if((newx>=0 && newx<n) && (newy>=0 && newy<n) && visited[newx][newy]==0 && arr[newx][newy]==1){
        return true;
    }
    else{
        return false;
    }
}
void solve(int x,int y,vector<vector<int>> &arr,int n,vector<string> &ans,vector<vector<bool>> &visited,string path){
    // base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    // down
    if(issafe(x+1,y,visited,arr,n)){
        visited[x][y]=1;
        solve(x+1,y,arr,n,ans,visited,path + 'D');
        visited[x][y]=0;
    }
    // left
    if(issafe(x,y-1,visited,arr,n)){
        visited[x][y]=1;
        solve(x,y-1,arr,n,ans,visited,path + 'L');
        visited[x][y]=0;
    }
    // right
    if(issafe(x,y+1,visited,arr,n)){
        visited[x][y]=1;
        solve(x,y+1,arr,n,ans,visited,path + 'R');
        visited[x][y]=0;
    }
    // UP
    if(issafe(x-1,y,visited,arr,n)){
        visited[x][y]=1;
        solve(x-1,y,arr,n,ans,visited,path + 'U');
        visited[x][y]=0;
    }
}
    public:
    vector<string> findPath(vector<vector<int>> &arr, int n) {
        // Your code goes here
        vector<string>ans;
    vector<vector<bool>>visited(n,vector<bool>(n,0));
    string path="";
    if(arr[0][0]==0){
        return ans;
    }
    solve(0,0,arr,n,ans,visited,path);
    return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends