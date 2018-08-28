#include<iostream>
using namespace std;

long blowable(long array[], long size){
    long candlesbhuji=0;
   
    long store =array[0];

    for(long i=0;i<size;i++){
   //     cout<<array[i]<<endl;
        
        if(array[i]>=store){
            candlesbhuji++;
            store=array[i];
        }


    }
    cout<<candlesbhuji<<endl;
    return candlesbhuji;

}

int main(){
    long n;//age and no of candles
    cin>>n;
    long candles[n];
    long i;
        for(i=0;i<n;i++){
            cin>>candles[i];
        }
    //candle comparision    
    blowable(candles,n);    

}