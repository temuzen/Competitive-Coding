#include<iostream>
using namespace std;
//using the Brute Force method.




int main(){
    int N,position;
    cin>>N>>position;

    int array[N];

    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    int Value = array[position-1];
    int counter=0;

    for(int i=0;i<N;i++){

        if(array[i]>=Value && Value!=0){
            counter++;
        }
        else if(array[i]>Value && Value==0){
            counter++;            
        }
        

    }
    cout<<counter<<endl;    
}
  
 
//Using index method...
/*
int recfunct(int array[],int size,int position){
        int currentval=array[0];
        cout<<currentval+5;

        if(currentval>0){
            position++;
            recfunct(array,size,position);        
        }
}


int main(){
    int N,position;
    cin>>N;
    int array[N];
    
    for(int i=0;i<N;i++){
         cin>>array[i];
    }
    recfunct(array,N,position);
}

*/



