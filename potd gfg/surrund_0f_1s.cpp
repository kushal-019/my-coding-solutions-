//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
int checktop(int rows , int cols ,vector<vector<int> > matrix , int n ,int m ){
    if(rows==0){
        return 0;
    }
    if(matrix[rows-1][cols] == 0){
        return 1;
    }
    return 0;
}

int checkbottom(int rows , int cols ,vector<vector<int> > matrix , int n ,int m){
    if(rows==n-1){
        return 0;
    }
    if(matrix[rows+1][cols] == 0){
        return 1;
    }
    return 0;
}

int checkleft(int rows , int cols ,vector<vector<int> > matrix , int n ,int m){
    if(cols==0){
        return 0;
    }
    if(matrix[rows][cols-1]==0){
        return 1;
    }
    return 0;
}

int checkright(int rows , int cols ,vector<vector<int> > matrix , int n ,int m){
    if(cols==m-1){
        return 0;
    }
    if(matrix[rows][cols+1]==0){
        return 1;
    }
    return 0;
    
}

int check_d1(int rows , int cols ,vector<vector<int> > matrix , int n ,int m ){
    if(rows==0 || cols==0){
        return 0;
    }
    
    if(matrix[rows-1][cols-1]==0){
        return 1;
    }
    return 0;
}

int check_d2(int rows , int cols ,vector<vector<int> > matrix , int n ,int m){
    if(rows==0 || cols==m-1){
        return 0;
    }
    
    if(matrix[rows-1][cols+1]==0){
        return 1;
    }
    return 0;
}

int check_d3(int rows , int cols ,vector<vector<int> > matrix , int n ,int m){
    if(rows==n-1 || cols==m-1){
        return 0;
    }
    
    if(matrix[rows+1][cols+1]==0){
        return 1;
    }
    return 0;
}

int check_d4(int rows , int cols ,vector<vector<int> > matrix , int n ,int m){
    if(rows==n-1 || cols== 0){
        return 0;
    }
    
    if(matrix[rows+1][cols-1]==0){
        return 1;
    }
    return 0;
}
    
    int check(int rows , int cols ,vector<vector<int> > matrix , int n ,int m){
    int count = 0;
    count += checktop(rows , cols , matrix ,n,m);
    count += checkbottom(rows , cols , matrix ,n,m);
    count += checkleft(rows , cols , matrix ,n,m);
    count += checkright(rows , cols , matrix ,n,m);
    count += check_d1(rows , cols , matrix ,n,m);
    count += check_d2(rows , cols , matrix ,n,m);
    count += check_d3(rows , cols , matrix ,n,m);
    count += check_d4(rows , cols , matrix ,n,m);
    return count;
    
}

    int Count(vector<vector<int> >& matrix) {
        int count=0;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                int flag = check(i , j , matrix , n , m);
                if(flag % 2 ==0 && flag!=0){
                    count++;
                    
                }
            }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends