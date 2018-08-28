#include<iostream>
using namespace std;


int main(){

int x1,v1,x2,v2;

cin>>x1;
cin>>v1;

cin>>x2;
cin>>v2;

    if(v1>=0 && v2>=0 && x1>=0 && x2>=0){
        if(x1<=x2 && v1>=v2 || x2<=x1 && v2>=v1){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    else if(v1<=0 && v2<=0 && x1>=0 && x2>=0){
        if(x1>=x2 && v1>=v2 || x2>=x1 && v2<=v1){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    else if(v1<=0 && v2>=0  && x1>=0 && x2>=0){
        if(x1>=x2){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }        
    }
    else if(v2<=0 && v1>=0 && x1>=0 && x2>=0){
        if(x2>=x1){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }        
    }

//For negative x
    else if(v1>=0 && v2>=0 && x1<=0 && x2<=0){
        if(x2<=x1 && v1>=v2 || x1<=x2 && v2>=v1){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    else if(v1<=0 && v2<=0 && x1<=0 && x2<=0){
        if(x2>=x1 && v1>=v2 || x1>=x2 && v2<=v1){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    else if(v1<=0 && v2>=0  && x1<=0 && x2<=0){
        if(x2>=x1){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }        
    }
    else if(v2<=0 && v1>=0 && x1<=0 && x2<=0){
        if(x1>=x2){
        cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }        
    }
/*
else{
    cout<<"NO"<<endl;
}
*/

}


