#include<iostream>
using namespace std;



int main(){

    int n;
    cin>>n;
    int score[n];
    int High,Low;
    int Highcounter=0;
    int Lowcounter=0;
    
   
    for(int i=0;i<n;i++){
            

            cin>>score[i];      

            if(i==0){
                 High=score[0];
                 Low=score[0];
            }
            
            if(score[i]>High){
                High=score[i];
                Highcounter++;
            }
            else if(score[i]<Low){
                Low=score[i];
                Lowcounter++;
            }
            
        }

    
    
    cout<<Highcounter<<" "<<Lowcounter<<endl;
    

}    


