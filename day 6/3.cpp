
// You are given a standard 8×8 chessboard which has exactly 2 rooks on it and no other pieces. The rows are numbered 1 to 8 from bottom to top, and the columns are numbered 1 to 8 from left to right. The cell at the intersection of the i-th column and j-th row is denoted (i,j)
// Given the initial positions of the rooks in the form of coordinates, you need to tell whether the 2 rooks currently attack each other or not. Assume, each square can contain at most one piece.Rooks can only travel in straight lines along the row or column they are placed at, and can't jump over other pieces. For a more detailed explanation of the moves of rooks, along with images, please click here.
// 3
// 1 2 5 2         yes
// 1 2 1 5         yes
// 1 1 8 8         no

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int arr[b];
        for(int j=0;j<a;j++){
            string str;
            cin>>str;
            int count1=0,count2=0;
            for(int k=0;k<b;k++){
                if(str[k]=='F'){
                    count1++;
                }
                else if (str[k]=='P'){
                    count2++;
                }
            }
            if(count1>=c||(count1>=c-1&&count2>=d)){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
	return 0;
}
