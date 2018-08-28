#include<iostream>
#include<cmath>
using namespace std;




int main(){
    int m,n;
    cin>>n;
    cin>>m;
    
    int A[n];
    int B[m];
    int X=2;
    int aicounter=0;
    int bicounter=0;
    int X1[n];
    int X2[m];     


    for(int a=0;a<n;a++){
            cin>>A[a];
        for(X=2;X<=100;X++){
            if(X%A[a]==0){
                aicounter++;
                X1[a]=X;
                X++;
            }
            else;    
        }    
    }

    for(int b=0;b<m;b++){
            cin>>B[b];
        for(X=2;X<=100;X++){

            if(B[b]%X==0){
                bicounter++;
                X2[b]=X;
                X++;
            }

        else;    
    }



    if(aicounter==n-1 && bicounter==m-1){

        for(int i=0;i<n;i++){
            cout<<X1[i]<<endl;
        }

        cout<<"SECOND CASE ANALYSIS"<<endl;
        for(int j=0;j<m;j++){
            cout<<X2[j]<<endl;
        }
    }

   




}
}