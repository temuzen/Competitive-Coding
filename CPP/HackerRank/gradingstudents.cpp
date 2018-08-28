#include<iostream>
using namespace std;



int rounding(int x){
    int adder;
    int mod5= x%5;
    int modifiedgrade;
    
    if(mod5==3){
    adder = 5-3;    
    modifiedgrade = x + adder;
    }
    else if(mod5==4){
    adder = 5-4;    
    modifiedgrade = x + adder;
    }
    
    cout<<modifiedgrade<<endl;
    return 0;

}

int main(){

    
    int students;
    cin>>students;
    int grade[students];
    

    for(int i=0;i<students;i++){
        cin>>grade[i];
    }
    

for(int i=0;i<students;i++){

    if(grade[i]>=38){
        if(grade[i]%5>=3){
            rounding(grade[i]);

        }
        else if(grade[i]%5==0||grade[i]%5<3){
            cout<<grade[i]<<endl;
        }
    }
    else{
        cout<<grade[i]<<endl;
        
    }

}


}