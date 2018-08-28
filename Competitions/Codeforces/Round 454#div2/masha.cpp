#include<iostream>
using namespace std;




int main(){
    int v1,v2,v3,vm;
    cin>>v1>>v2>>v3>>vm;




        if(vm>v3 && 2*v3>=vm){
            cout<<v1<<endl;
            cout<<v2<<endl;
            cout<<vm<<endl;
        }
        else if(vm<v3||vm==v3){
            cout<<v1<<endl;
            cout<<v2<<endl;
            cout<<v3<<endl;
        }
        else{
        cout<<"-1"<<endl;
    }
}
