#include<iostream>
using namespace std;



int main(){
    int N;
    cin>>N;
    long sample[N];
    long sum = 0;  

    for(int i=0;i<N;i++){
    cin>>sample[i];   
    sum = sum + sample[i];
  //  cout<<sum<<endl;
    }
    cout<<sum;

}

//Accepted...