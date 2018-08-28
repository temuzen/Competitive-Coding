#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;



int main(){
    
    double long n,m,a;
    //long tilesrequired,min_tiles_m,min_tiles_n;

    cin>>n>>m>>a;
   // int remaindern,remainderm;
        double long Answer = ceil(m/a) * ceil(n/a);

    cout<<setprecision(10000000)<<Answer<<endl;

}


//use set precision and Ceil function systematically..