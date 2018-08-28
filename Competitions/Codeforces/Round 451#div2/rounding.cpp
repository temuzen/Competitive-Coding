#include<iostream>
#include<cstdlib>
using namespace std;

long rounding(long x){

    int unitsplace = x%10;
    int tensplace = (x/10)%10;
    int tenscounter=0;

    if(unitsplace<5){

       long final = x/10;
       final = final*10;
       cout<<final<<endl;

    }
    else if(unitsplace>5){
        long final = x/10;
        final++;
        final = final*10;
        cout<<final<<endl;
    }
    else if(unitsplace==5){

       int random = rand()%2;

        if(random==0){
        long final = x/10;
        final++;
        final = final*10;
        cout<<final<<endl;
        }
        else(random>0){            
       long final = x/10;
       final = final*10;
       cout<<final<<endl;
        }


    }

}




int main(){

    long number;
    cin>>number;
    rounding(number);


}


//COntest was over...     : |