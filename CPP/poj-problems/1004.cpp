#include<iostream>
using namespace std;




int main(){
    int n=12;
    double bal[12];
    double sum=0;
    
    for(int i=0;i<n;i++){
        cin>>bal[i];
        sum = sum + bal[i];
    }

    cout<<"$"<<sum/12<<endl;
}