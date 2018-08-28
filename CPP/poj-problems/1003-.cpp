#include<iostream>
using namespace std;

int main(){
    double N =0;
    double x = 2;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        N = N + 1/x;
        x++;
    }
    


    cout<<N<<endl;


}


//Needs Revision
