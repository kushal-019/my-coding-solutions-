// Chef's favorite game is chess. Today, he invented a new piece and wants to see its strengths.From a cell (X,Y), the new piece can move to any cell of the chessboard such that its color is different from that of (X,Y).The new piece is currently located at cell (A,B). Chef wants to calculate the minimum number of steps required to move it to (P,Q).Note: A chessboard is an 8×8 square board, where the cell at the intersection of the i-th row and j-th column is denoted (i,j). Cell (i,j) is colored white if i+j is even and black if i+j is odd.

// 3
// 1 1 8 8  2
// 5 7 5 8  1
// 3 3 3 3  0

#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
	    int w,x,y,z,count=0;
	    cin>>w>>x>>y>>z;
	    if((w==y)&&(x==z)){
	        count=0;
	    }
	    else {
	        if((w+x)%2==(y+z)%2){
	        count=2;
	    }
	    else{
	        count=1;
	    }
	        
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
