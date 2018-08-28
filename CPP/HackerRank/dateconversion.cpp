#include<iostream>
#include<string>
using namespace std;


int main(){




    //string x;
    int h[2];
    int m[2];
    int s[2];

    
string x;
string hh;
string mm;
string ss;
string X;
//string h1,h2; 



//  01:20:21:PM

//cout<<"Hello"<<endl;
cin>>x;
//cout<<x<<endl;
 
hh = x.substr(0,2);
//h1 = x.substr(0,1);
//h2 = x.substr(1,1);
mm = x.substr(3,2);
ss = x.substr(6,2);
X = x.substr(8,2);


//cout<<hh<<endl;
//cout<<mm<<endl;
//cout<<ss<<endl;
//cout<<X<<endl;

char h1 = hh.at(0);
int Hi1 = h1-48;
char h2 = hh.at(1);
int Hi2 = h2-48;

char m1 = mm.at(0);
int mi1 = m1-48;
char m2 = mm.at(1);
int mi2 = m2-48;

char s1 = ss.at(0);
int si1 = s1-48;
char s2 = ss.at(1);
int si2 = s2-48;




//cout<<h1<<endl;
//cout<<Hi1+100<<endl;
//cout<<Hi2+100<<endl;




   // cin>>Hi1>>Hi2>>mi1>>mi2>>si1>>si2>>x;
   // cout<<Hi1<<Hi2<<":"<<mi1<<mi2<<":"<<si1<<si2<<":"<<x<<endl;

    if((X=="PM") && ((mi1+mi2)<15) && ((Hi1*Hi2)<2) && ((si1+si2)<15) ){
        Hi1=Hi1+1;
        Hi2=Hi2+2;        
       // x="AM";
        cout<<Hi1<<Hi2<<":"<<mi1<<mi2<<":"<<si1<<si2<<endl;
    }
    
    if((X=="PM") && ((mi1+mi2)<15) && ((Hi1*Hi2)==2) && ((si1+si2)<15) ){
        Hi1=1;
        Hi2=2;        
        //x="AM";
        cout<<Hi1<<Hi2<<":"<<mi1<<mi2<<":"<<si1<<si2<<endl;
    }
    
    if((X=="PM") && ((mi1+mi2)==0) && ((Hi1*Hi2)==2) && ((si1+si2)==0) ){
        Hi1=1;
        Hi2=2;
        mi1=0;
        mi2=0;
        si1=0;
        si2=0; 
        //x="AM";
        cout<<Hi1<<Hi2<<":"<<mi1<<mi2<<":"<<si1<<si2<<endl;
    }
    
    
    if((X=="AM") && ((mi1+mi2)<15) && ((Hi1*Hi2)<=1) && ((si1+si2)<15) ){
      //  x="AM";
        cout<<Hi1<<Hi2<<":"<<mi1<<mi2<<":"<<si1<<si2<<endl;
    }

    if((X=="AM") && ((mi1+mi2)<15) && ((Hi1*Hi2)==2) && ((si1+si2)<15)){
        Hi1=0;
        Hi2=0;
        cout<<Hi1<<Hi2<<":"<<mi1<<mi2<<":"<<si1<<si2<<endl;
    }
  
}