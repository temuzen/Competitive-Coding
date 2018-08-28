#include<iostream>
using namespace std;



int main(){

    int N;
    int side;
    char x = '#';
    char blank = ' ';
    cin>>N;
    char array[N][N];

    for(int i=0;i<N;i++){

        for(int j=0;j<N;j++){

            if((i+j)>=N-1){
                array[i][j]=x;   
            }
            else
            array[i][j]=blank;    
        }   
    }
    
    
    for(int i=0;i<N;i++){

        for(int j=0;j<N;j++){
        cout<<array[i][j];   
        }   
        cout<<endl;
    }
    

}



//Using Matrix ... logic 