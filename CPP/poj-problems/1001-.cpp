//Exponentiation
#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<sstream>
using namespace std;


double exponentization(double x,int r,int precision){
    
    double N = 1*x;
       for(int i=1;i<r;i++){ 
       N = x*N;
    }
    cout<<N<<endl;
    return N;
}

int main(){
    string R;
    int n;

    while(cin>>R>>n){
        //cout<<R<<" "<<n<<endl;
        long double x=0;
        int position = R.find(".");
        string substring = R.substr(position+1);
        int precision = substring.length();
        stringstream convert(R);
        convert>>x;
        exponentization(x,n,precision);
 
        
    }
    
    //exp(R,n);

}