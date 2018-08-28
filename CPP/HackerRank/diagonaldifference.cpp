#include<iostream>
#include<stdlib.h>
using namespace std;





int main(){

    int N;
    cin>>N;
    int Matrix[N][N];
    
    for(int row=0;row<N;row++){        
        for(int column=0;column<N;column++){
            cin>>Matrix[row][column];
        }    
        
    }
 //prints matrix
 /*
    for(int i=0;i<N;i++){        
        for(int j=0;j<N;j++){
            cout<<Matrix[i][j]<<" ";
            cout<<" ";
        }        
        cout<<endl;
    }
*/
//Logic.........................................................................
        int sdiagdsum=0;
        int primdsum=0;

    for(int i=0;i<N;i++){        
        for(int j=0;j<N;j++){
            
            if((i+j)==(N-1)){
                sdiagdsum = sdiagdsum + Matrix[i][j];    
            }
            if(i==j)
            {
                primdsum = primdsum + Matrix[i][j]; 
            }
                 
            }

        }        
  //   cout<<primdsum<<endl;
    // cout<<sdiagdsum<<endl;
     int x = abs(primdsum-sdiagdsum);//prints the absolute difference betn the two diag values..
 
     cout<<x<<endl;

    }
    
//USing a Series of if statement 
//not else if to check for all conditiions independently..

//using Stdlib for mathematical operations
