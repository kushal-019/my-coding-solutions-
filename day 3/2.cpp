// Chef is participating in an ICPC regional contest, in which there is a total of N problems (numbered 1 through 
// N) with varying difficulties. For each valid i,
// i-th easiest problem is problem Ai .After a team solves a problem, a balloon with a colour representing that problem is tied next to their desk. Chef is fond of colours in VIBGYOR, which are representative of the problems with numbers 1 through 7. The remaining problems have their own representative colours too.
// Find the minimum number of problems which Chef's team needs to solve in order to get all the balloons for problems 1 through 7 (and possibly some other balloons too) tied next to their desk, if you know that Chef's team knows the difficulties of all problems and solves the problems in increasing order of difficulty.
// 3
// 7
// 1 2 3 4 5 7 6         7
// 8
// 8 7 6 5 4 3 2 1       8
// 9
// 7 4 3 5 6 1 8 2 9     8

#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        int arr[b];
        int count=0,c=0;
        for(int j=0;j<b;j++){
            cin>>arr[j];
            c++;
            if(arr[j]<=7){
                count++;
            }
            if(count==7){
                cout<<c<<endl;
                count=0;
            }
        }
    }
	return 0;
}
