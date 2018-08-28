#include<iostream>
#include<string>
using namespace std;



int main(){
    string Value;
    cin>>Value;

    int x=0;
    int size=Value.size();
 //   cout<<size;
    for(int i=0;i<size;i++){
        char x = Value.at(i);
        
        if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')){
            cout<<"Vowel at "<<i<<endl; 
            Value.replace(i,1,".");
        }
        }
        cout<<Value<<endl;
    }

    