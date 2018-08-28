#include<iostream>
using namespace std;


int maximumval(int array[],int N){
    int M = array[0];
    for(int x=0;x<N;x++){
        if(array[x]>M){
            M = array[x];
        }
    }
    return M;
}

int minimumval(int array[],int N){
    int m = array[0];
    for(int xx=0;xx<N;xx++){
        if(array[xx]<m){
            m = array[xx];
        }
    }
    return m;
}

int maxduplicates(int array[],int N,int Max){
    int duplicates = 0;
    for(int y=0;y<N;y++){
        if(array[y]==Max){
            duplicates++;
        }
    }

    return duplicates;
}

int main(){
    int N;
    cin>>N;
    int array[N];
    int summer = 0;

    for(int i=0;i<N;i++){
        cin>>array[i];
    }

    int max = maximumval(array,N);
    int min = minimumval(array,N);
    int Original = array[0];
    int maxduplicateval = maxduplicates(array,N,max);
   // cout<<"Duplicates "<<maxduplicateval<<endl;
       
    if((max == array[0]) && maxduplicateval!=N){
        cout<<"0"<<endl;
    }
    else if((max == array[0]) && maxduplicateval==N){
        cout<<"1"<<endl;
    }

    else{
       
        if(maxduplicateval>1){
               // cout<<"INSIDE WHEN MAXDUPVAL>1"<<endl;
                while(max>=array[0]){
                max--;
                array[0]=array[0]+maxduplicateval;
                summer=summer+maxduplicateval;
                }
                cout<<summer<<endl;
        }

        else{
                while(max>array[0])
                {
                max--;
                array[0]++;
                summer++;    
                }
                summer++;
                cout<<summer<<endl;
            }
    }
    
    

}
    
