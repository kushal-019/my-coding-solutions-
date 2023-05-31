// Today is the final round of La Liga, the most popular professional football league in the world. Real Madrid is playing against Malaga and Barcelona is playing against Eibar. These two matches will decide who wins the league title. Real Madrid is already 3 points ahead of Barcelona in the league standings. In fact, Real Madrid will win the league title, except for one scenario: If Real Madrid loses against Malaga, and Barcelona wins against Eibar, then the La Liga title will go to Barcelona. In any other combination of results, Real Madrid will win the title.

// You will be given multiple scenarios for these two games, where in each one you will be given the number of goals each team scored in their respective match. A team wins a match if it scores more than the opponent. In case they score the same number of goals, it's a draw. Otherwise, the team loses the game. You are asked to tell the winner of the La Liga title in each scenario.

#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int arr[4];
        string c;
        int diff=0,diff2=0;
        for(int j=0;j<4;j++){
            cin>>c;
            cin>>arr[j];
            if(c=="RealMadrid"){
            diff+=arr[j];}
            else if(c=="Malaga"){
            diff-=arr[j];}
            else if(c=="Barcelona"){
            diff2+=arr[j];}
            else if(c=="Eibar"){
            diff2-=arr[j];}
        }
        if(diff<0&&diff2>0){
            cout<<"Barcelona"<<endl;
        }
        else{
            cout<<"RealMadrid"<<endl;
        }
        
    }
	return 0;
}
