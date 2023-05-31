// Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. Once someone can't eat what he is supposed to eat, he loses. Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. Who will win the game? Print "Limak" or "Bob" accordingly.

#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b,c;
        cin>>b>>c;
        int limak=0;
        int bob=0;
        for(int j=1;j>0;j++){
            if(j%2==0){
                bob=bob+j;
                if(bob>c){
                    cout<<"Limak"<<endl;
                    break;
                }
            }
            else{
                limak=limak+j;
                if(limak>b){
                    cout<<"Bob"<<endl;
                    break;
                }
            }
        }
    }
	return 0;
}
