#include<iostream>
using namespace std;

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int funct1(long array[],long l,long r,long sizeofarray){

//cout<<"In FUnction 1"<<endl;

for(int x=l-1;x<=r-1;x++){
    array[x]=array[x]+1;
}
//cout<<"Incremented Value"<<endl;
/*
for(int x=0;x<sizeofarray;x++){
    cout<<array[x]<<endl;
}
*/
    return 0;
}

long funct2(long array[],long l,long r,long sizeofarray){
//cout<<"In FUnction 2"<<endl;

    long sumfact=0;
    long modulosum;
  
    for(int x=l-1;x<=r-1;x++){
    long xx = factorial(array[x]);
    sumfact = sumfact + xx;
    return sumfact;
}
//    cout<<"Factorial Sum is :"<<sumfact<<endl;
 }

long funct3(long array[],long i,long v,long sizeofarray){
//cout<<"In FUnction 3"<<endl;
    long temp;

    temp = array[i-1];
    array[i-1] = v;
   // cout<<"Modified array"<<endl;
    for(int x=0;x<sizeofarray;x++){
    //cout<<array[x]<<endl;
}

}
    
    
int main()
{

    int n,m;    
    cin>>n;
    cin>>m;
    long array[n];
    long op[3];
    //filling array..
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int arraychoices[m];
    int arrayop1[m];
    int arrayop2[m];
    long outcome[m]; 
    //int fucnt3=0;   

    for(int i=0;i<m;i++){
        
        for(int j=0;j<3;j++)
        {
        
        cin>>op[j];
        arraychoices[i]=op[0];
        arrayop1[i]=op[1];
        arrayop2[i]=op[2];


        }
        
   




//We'll have to use matrix here...... Saved for later.        
    }
     for(int i=0;i<m;i++){


        if(arraychoices[i]==1){
            funct1(array,arrayop1[i],arrayop2[i],n);
            outcome[i]=1111;
        
        
        }

        if(arraychoices[i]==2){
            outcome[i]=funct2(array,arrayop1[i],arrayop2[i],n);
            
        }
        else if(arraychoices[i]==3){
            funct3(array,arrayop1[i],arrayop2[i],n);
         //   fucnt3++;
            outcome[i]=10101;

        }


    }

    for(int i=0;i<m;i++){

        if(outcome[i]!=10101 && outcome[i]!=1111){
        cout<<outcome[i]<<endl;
        }
        else;

    }

//Try using pointer for referencing the array so that once any function is called the original values shall remain intact..    
}