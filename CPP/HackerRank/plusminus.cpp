#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;





int main(){
    int N;
   // cout<<"Enter the length of Array"<<endl;
    cin>>N;
    int Array[N];
    int Positivecounter=0;
    int negativecounter=0;
    int zerocounter=0;
    
    for(int i=0;i<N;i++){
    cin>>Array[i];
    }


    for(int i=0;i<N;i++){

        if(Array[i]>0){

            Positivecounter++;

        }
        else if(Array[i]<0){
            negativecounter++;  
        }
        else if(Array[i]==0){
            zerocounter++;
        }
    
    }
//Fraction computation

    double ZF,PF,NF;    
    double n = N;
    ZF = zerocounter/n;
    PF = Positivecounter/n;
    NF = negativecounter/n;

    cout<<setprecision(7)<<PF<<endl;
    cout<<setprecision(7)<<NF<<endl;
    cout<<setprecision(7)<<ZF<<endl;

}

//Remember double divided by double yeilds precision..

//use setprecision method for better yeilds...(iomanip.h)

