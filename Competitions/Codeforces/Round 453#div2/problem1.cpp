#include<iostream>
using namespace std;


int main(){

    int n,m;  
    int arraybegin[n];
    int arrayend[n];
    int counter=0;
     cin>>n;
   cin>>m;

    for(int i=0;i<n;i++){
        cin>>arraybegin[i];
        cin>>arrayend[i];
    }  

    for(int j=0;j<n-1;j++){
        if((arraybegin[j+1]<=arrayend[j] && m>=0)){
            counter++;
        }
    }
    if(arrayend[n-1]==m && counter==n-1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}




