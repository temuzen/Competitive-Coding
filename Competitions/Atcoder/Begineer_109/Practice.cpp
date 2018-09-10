#include<iostream>
#include<vector>
using namespace std;


int main(){

    int N;
    vector<int> vctr;
    int x=0;
    cin>>N;

    for(int i=2;i<=N;i++){

        for(int n=1;n<=i;n++){

                if(i%n==0){
                    x++;
                }

        }
    if(x=2)
    vctr.push_back(i);

    x=0;
    
    }
    
    for(int a=0;a<N;a++){
    cout<<vctr[a]<<endl;
    }
    
    return 0;
}