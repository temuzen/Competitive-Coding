#include<iostream>
using namespace std;



int main(){
    int m,n;
    int counter1=0;
    int counter2=0;
    cin>>n;
    cin>>m;

    int A[n];
    int B[n];


    for(int i=0;i<n;i++){
        cin>>A[i];
        cin>>B[i];
    }

    for(int j=0;j<n-1;j++){

        if(A[j+1]<=B[j]){
            counter1++;
        }
        if(B[j]<=B[j+1]){
            counter2++;
        }
        
    }
    
    if(counter1==n-1 && counter2==n-1 && B[n-1]==m && A[0]==0){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;





}