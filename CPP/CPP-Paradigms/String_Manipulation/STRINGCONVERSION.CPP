#include<iostream>
#include<conio.h>
#include<string>
using namespace std;



int main(){

string x;
string hh;
string mm;
string ss;
string X;
//string h1,h2;



//  01:20:21:PM

//cout<<"Hello"<<endl;
cin>>x;
cout<<x<<endl;
 
hh = x.substr(0,2);
//h1 = x.substr(0,1);
//h2 = x.substr(1,1);
mm = x.substr(3,2);
ss = x.substr(6,2);
X = x.substr(9,2);


cout<<hh<<endl;
cout<<mm<<endl;
cout<<ss<<endl;
cout<<X<<endl;

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

}