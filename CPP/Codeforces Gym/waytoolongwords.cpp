#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string inttostring(int x){
    ostringstream temp;
    temp<<x;
    return temp.str();
}

string outputgen(string original){
    string first,last;
    int length;
    length = original.length();
    first = original.at(0);
    last = original.at(length-1);
    int middle = length-2;
    string middlef = inttostring(middle);
    string Output = first+middlef+last;
   // cout<<Output<<endl;
    return Output;
}


int main(){
    int N;
    cin>>N;
    
    string arstring[N];

    for(int i=0;i<N;i++){
    string original;
    cin>>original;

        if(original.length()>10){
            arstring[i]=outputgen(original);
        }
        else
            arstring[i]=original;    
    }
       for(int i=0;i<N;i++){
    cout<<arstring[i]<<endl;
    }


}