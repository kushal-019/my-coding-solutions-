// A company conducted a coding test to hire candidates. N candidates appeared for the test, and each of them faced M problems. Each problem was either unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'), or solved completely (denoted by 'F').To pass the test, each candidate needs to either solve X or more problems completely, or solve (X−1) problems completely, and Y or more problems partially.Given the above specifications as input, print a line containing N integers. The ith integer should be 1 if the ith candidate has passed the test, else it should be 0
// 3
// 4 5
// 3 2
// FUFFP           1100
// PFPFU
// UPFFU
// PPPFP
// 3 4
// 1 3
// PUPP            101
// UUUU
// UFUU
// 1 3             0
// 2 2
// PPP


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
