// Chef wants to order food from a food delivery app. He wishes to order once today, and buy three items costing A1 A2 A3 rupees, respectively. He'll also order once tomorrow, when he'll buy three items costing B1 B2 B3 rupees, respectively. There is an additional delivery charge of rupees D for each order.He notices that there is a coupon on sale, which costs rupees C. If he buys that coupon, the delivery charges on any day, on an order of rupees 150 or more shall be waived (that is, the D rupees will not be added, if the sum of the costs of the items is ≥150).Note that Chef is ordering the three items together on each day, so the delivery charge is charged only once each day. Also, note that it's only needed to buy the coupon once to avail the delivery fee waiver on both days.Should Chef buy the coupon? Note that Chef shall buy the coupon only if it costs him strictly less than what it costs him without the coupon, in total.

// 2
// 90 100
// 100 50 10
// 80 80 80        YES
// 30 30
// 100 100 100
// 10 20 30        NO


#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int d,c;
        int m,n,o,p,q,r;
        cin>>d>>c;
        cin>>m>>n>>o>>p>>q>>r;
        int sum1=m+n+o;
        int sum2=p+q+r;
        if(sum1>=150&&sum2>=150){
            if(sum1+sum2+c<sum1+sum2+d+d){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(sum1>=150 || sum2>=150){
        if (sum1+sum2+c+d<sum1+sum2+d+d){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
    else{
        cout<<"NO"<<endl;
    }
        
    }
	return 0;
}
