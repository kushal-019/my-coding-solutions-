// Nitin and Sobhagya were playing a game with coins. If Sobhagya has more coins then he is winning, otherwise Nitin is winning. Note that this means if both Nitin and Sobhagya have the same number of coins, then Nitin is winning. Initially Nitin has A coins while Sobhagya has B coins. Then Ritik came and gave his C coins to the player who is not winning currently, after which Satyarth came and repeated the same process (gave his D coins to the player who is not winning currently).
// Find the final winner of the game.

#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        if(w<x){
            w+=y;
        }
        else{
            x+=y;
        }
        
        if(w<x){
            w+=z;
        }
        else{
            x+=z;
        }
        
        if(w<x){
            cout<<"S"<<endl;
            
        }
        else{
            cout<<"N"<<endl;
    }
        
    }
	return 0;
}
