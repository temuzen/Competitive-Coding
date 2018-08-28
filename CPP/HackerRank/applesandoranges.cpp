#include<iostream>
#include<cmath>
#include<vector>

using namespace std;





int main(){

    long s,t,a,b,m,n;
    long D;    
    long applesincounter = 0;
    long orangesincounter = 0;
    long x=0;
    int compvalue=0;
    
    cin>>s;
    cin>>t;
    
    cin>>a;
    cin>>b;

    cin>>m;
    cin>>n;
    
    for(long i=0;i<m;i++){
        cin>>D;

     //   cout<<"Counter value is befor comparision:- "<<applesincounter<<endl;    
        if(s<=D+a && D+a<=t){
            applesincounter++;
         //   cout<<"s-a is :"<<s-a<<" t-a is :"<<t-a<<" Value of D is : "<<D<<endl;     
          //  cout<<"Counter value is :- "<<applesincounter<<endl;                        
            D=0;
//compvalue=0;
        }
        else{
            x++;
           // compvalue=0;
        }

    }    
    
    for(long j=0;j<n;j++){
        cin>>D;
        long xxx=D+b;
        
        if(s<=xxx && xxx<=t){
            orangesincounter++;
            D=0;
            xxx=0;
          //  compvalue=0;
        }else{
            x++;
            xxx=0;
      //      compvalue=0;
        }
        xxx=0;
    }    


    cout<<applesincounter<<endl;
    cout<<orangesincounter<<endl;
//    cout<<x<<endl;
    
    


}