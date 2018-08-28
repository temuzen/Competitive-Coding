#include<iostream>
using namespace std;

int arraysum(int size,int Array[]){

    int sum = 0;
        for(int i=0;i<size;i++)
        {
            sum = sum + Array[i];
        }
        
        return sum;
}


int arraysuminput(int size){

    int Arrayname[size];
    for(int i=0;i<size;i++){
        cin>>Arrayname[i];
 //       cout<<"Value at array at "<< i <<" is "<<Arrayname[i]<<endl;
    }
     return arraysum(size,Arrayname);
        
}

int main(){

    int arraylength;      
    cin>>arraylength;
    int Sum;
    Sum = arraysuminput(arraylength);
    cout<<Sum<<endl;
   
    //arraysum(arraylength,Arrayname);

}