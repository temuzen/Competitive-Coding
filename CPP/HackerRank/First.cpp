#include<iostream>
using namespace std;




class Cart{

    int speed;
    char Name;
    int engine;

   public : currentstate(){

            cout<<"Car is Not Running"<<endl;
            cout<<"Car is Running"<<endl;
    }

};

int main() 
{
    
    Cart object1;
    object1.currentstate();

}
