#include<iostream>
#include<string>
using namespace std;


int main()
{

string fname,lname;
cin>>fname;
cin>>lname;

int length = fname.size();
int x=0;
int j=0;

   if(fname.length()==1){
        cout<<fname.at(0);
    }
else{ 
for(int i=0;i<length-1;i++){

    if(fname.at(j)<fname.at(j+1)){
        //cout<<fname.at(j);
        for(int xxx=0;xxx<j+1;xxx++){
        cout<<fname.at(xxx);
        }
        break;    
    }
    else if(fname.at(j)==fname.at(j+1)){
        for(int xxxx=0;xxxx<j+1;xxxx++){
        cout<<fname.at(xxxx);
        }
        break;    
    }
    
    else if(j==length-2){
        cout<<fname;
    }
    else{
        j++;
    }
}
}

int s=0;
int length1 = lname.size();
 
 if(lname.length()==1){
        cout<<lname.at(0)<<endl;
    }

for(int i=0;i<length1-1;i++){
    
   
    if(lname.at(s)>lname.at(s+1)){
        for(int xx=0;xx<s+1;xx++){
        cout<<lname.at(xx);
        }
        break;    
    }
    else if(lname.at(s)==lname.at(s+1)){
        for(int xxxxx=0;xxxxx<s+1;xxxxx++){
        cout<<lname.at(xxxxx);
        }
        break;    
    }
    else if(s==length1-2){
        cout<<lname<<endl;
    }
    else{
        s++;
    }

}





}
