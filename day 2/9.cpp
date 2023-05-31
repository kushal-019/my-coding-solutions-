// Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.

#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        int count=0;
        while(b>0){
            int t=b%10;
            if(t==4){
                count++;
            }
        b/=10;
        }
        cout<<count<<endl;
    }
	return 0;
}
