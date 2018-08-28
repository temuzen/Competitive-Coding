#include<iostream>
#include<algorithm>
using namespace std;


int main(){

    int N =5;
   // cin>>N;
    int array[N];
    long min=0;
    long max=0;


//Array creation..   
    for(int i=0;i<N;i++){
        cin>>array[i];
    }

//Sorting the array in ascending order.

//using library..
sort(array,array+N);

//cout<<"sorted  "<<endl;
/*
for(int i=0;i<N;i++){
        cout<<array[i]<<endl;
    }

*/




//min and max logic using predefined arranged array..

    //min
    for(int i=1;i<N;i++){
        max = max + array[i];
    }
    //max
    for(int i=0;i<N-1;i++){
        min = min + array[i];
    }
        
    cout<<min<<" "<<max<<endl;
    //cout<<max<<endl;
    

}


//Used existing Sorting function from algorithms of c++ STL