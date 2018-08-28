#include<iostream>
using namespace std;

int fact(int n)
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
int main(){
    int N;

    int Team;
    int ones=0;
    int twos=0;
    int noofteamsz3;

    cin>>N;//no of teams
    
    for(int i=0;i<N;i++){
    cin>>Team;
    //no of 1 and 2
        if(Team==1){
            ones++;
        }
        else if(Team==2){
            twos++;
        }
    }
    

    if(twos==0){
        noofteamsz3 = ones/3;
    }

    if(twos>ones>0){
        noofteamsz3 = ones;
    }
   
    if(ones>twos && twos!=0){
        noofteamsz3 = twos;
    }

    if(ones==0){
        noofteamsz3 = 0;
    }
    if(ones==twos){
        noofteamsz3 = ones;
    }

    
  //  cout<<"no of ones:= "<<ones<<endl;
  //  cout<<"no of twos:= "<<twos<<endl;  
    cout<<noofteamsz3<<endl;

}