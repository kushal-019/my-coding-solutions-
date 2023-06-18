// Given an m x n matrix, return all elements of the matrix in spiral order.

// input
// 1 2 3
// 4 5 6
// 7 8 9

// output
// 1 2 3 6 9 8 7 4 5


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        int startRow=0;
        int startCol=0;
        int endRow=n-1;
        int endCol=m-1;

        vector<int> output;

        int total_ele=n*m;

        int count=0;

        while(count<total_ele){
            for(int i = startCol ; i <= endCol && count<total_ele ; i++){
                output.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            for(int i = startRow ; i <= endRow && count<total_ele ; i++){
                output.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            for(int i = endCol ; i >= startCol && count<total_ele ; i--){
                 output.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            for(int i = endRow ; i >= startRow && count<total_ele ; i--){
                 output.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }

        return output;
    }
};