#include<iostream>
using namespace std;



int main(){
    int N;
    cin>>N;
    int Array;
    int type1=0;
    int type2=0;
    int type3=0;
    int type4=0;
    int type5=0;
    int Typearray[5];
        
    for(int i=0;i<N;i++){
       
        cin>>Array;
        
        if(Array==1){
            type1++;
        }
        if(Array==2){
            type2++;
        }
        if(Array==3){
            type3++;
        }
        if(Array==4){
            type4++;
        }
        if(Array==5){
            type5++;
        } 
    }
Typearray[0]=type1;
Typearray[1]=type2;
Typearray[2]=type3;
Typearray[3]=type4;
Typearray[4]=type5;

    
}