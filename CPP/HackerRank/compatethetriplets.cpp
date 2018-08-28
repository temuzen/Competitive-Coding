#include<iostream>
using namespace std;





int tripletcompare(int Array1[], int Array2[],int Size){
    int a=0;
    int b=0;

    int size=Size;

    for(int i=0;i<size;i++)
    {
    
    if(Array1[i]>Array2[i]){
        a = a+1;
    }
    else if(Array2[i]>Array1[i]){
        b = b+1;
    }
    
    else if(Array1[i]==Array2[i]){
           
    }

    }
   // return a,b;
    cout<<a<<" "<<b;
}

int createarray(int size){

    int A[size];
    int B[size];
    
    for(int i=0;i<size;i++){
    cin>>A[i];
    }
    
    for(int i=0;i<size;i++){
    cin>>B[i];
    }

    return tripletcompare(A,B,size);
}

int main(){
    int x = 3;
    createarray(x);
}