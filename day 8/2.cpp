// No play and eating all day makes your belly fat. This happened to Chef during the lockdown. His weight before the lockdown was w1 kg (measured on the most accurate hospital machine) and after M months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), he got the result that his weight was w2kg (w2>w1)  Scientific research in all growing kids shows that their weights increase by a value between x1 kg and x2 kg (inclusive) per month, but not necessarily the same value each month. Chef assumes that he is a growing kid. Tell him whether his home scale could be giving correct results.
// 5
// 1 2 1 2 2       0
// 2 4 1 2 2       1   
// 4 8 1 2 2       1   
// 5 8 1 2 2       1
// 1 100 1 2 2     0

#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        if(m*x1<=w2-w1&&m*x2>=w2-w1){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	return 0;
}
