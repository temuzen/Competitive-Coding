#include<iostream>
using namespace std;

int SUMMER(int Value){
        
    int SUM =0;
    int sum3=0;
    int sum5=0;

    while(sum3<Value-3){
        sum3 = sum3 + 3;
        cout<<sum3<<endl;
        SUM = SUM + sum3;
    }
    
    while(sum5<Value-5){
        sum5 = sum5 + 5;
        cout<<sum5<<endl;
        SUM = SUM + sum5;
    }

   // cout<<SUM<<endl;
    return SUM;
}

int main(){
    int i=0;
    int j=0;
    int Value,N;
    int FinalSum;
    //int SUMMATION=0;

    cin>>N;
    int Val[N];

    for(int i=0;i<N;i++){
            cin>>Value;
            Val[i]=SUMMER(Value);
    }
    
    for(int j=0;j<N;j++){
            cout<<Val[j]<<endl;
    }
    

    
}