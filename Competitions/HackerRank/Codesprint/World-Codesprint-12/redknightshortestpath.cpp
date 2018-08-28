#include<iostream>
#include<string>
#include<cmath>
using namespace std;
/*
possiblemoves(int startx,int starty,int destx,int desty,int sizeofmatrix)
{
    int lowerleft[2];
    int lowerright[2];
    int upperleft[2];
    int upperright[2];
    int onlyleft[2];
    int onlyright[2];
    
    upperleft[0]=startx-2;
    upperleft[1]=starty-1;

    upperright[0]=startx-2;
    upperright[1]=starty+1;
    

    lowerleft[0]=startx+2;
    lowerleft[1]=starty-1;

    lowerright[0]=startx+2;
    lowerright[1]=starty+1;
    
    onlyleft[0]=startx;
    onlyleft[1]=starty-2;

    onlyright[0]=startx;
    onlyright[1]=starty+2;
        

    cout<<"UpperRightmove:("<<upperright[0]<<","<< upperright[1]<<")"<<endl;
    cout<<"UpperLeftmove:("<<upperleft[0]<<","<< upperleft[1]<<")"<<endl;
    cout<<"lowerRightmove:("<<lowerright[0]<<","<< lowerright[1]<<")"<<endl;
    cout<<"lowerLeftmove:("<<lowerleft[0]<<","<< lowerleft[1]<<")"<<endl;
    cout<<"onlyRightmove:("<<onlyright[0]<<","<< onlyright[1]<<")"<<endl;
    cout<<"onlyLeftmove:("<<onlyleft[0]<<","<< onlyleft[1]<<")"<<endl;
    
}

allupperleftmoves(int startx,int starty,int destx,int desty,int sizeofmatrix){
    int upperleft[2];
    int upperleftcount=0;

     upperleft[0]=startx-2;
     upperleft[1]=starty-1;
    

    while(upperleft[0] >=0 && upperleft[1] >=0){

        //cout<<"UpperLeftmove:("<<upperleft[0]<<","<< upperleft[1]<<")"<<endl;
        upperleftcount++;
    
        startx=upperleft[0];
        starty=upperleft[1];

        upperleft[0]=startx-2;
        upperleft[1]=starty-1;
    
       
    
        
      
    }
    cout<<"No of Upperleft moves is "<<upperleftcount<<endl;
}

allupperrightmoves(int startx,int starty,int destx,int desty,int sizeofmatrix){
    int upperright[2];
    int upperrightcount=0;
    
        upperright[0]=startx-2;
        upperright[1]=starty+1;
    
    while(upperright[0] >=0 && upperright[1] <=sizeofmatrix-1){

       // cout<<"Upperrightmove:("<<upperright[0]<<","<< upperright[1]<<")"<<endl;
        upperrightcount++;

        startx=upperright[0];
        starty=upperright[1];
        
        upperright[0]=startx-2;
        upperright[1]=starty+1;
    
        
    
       
      
    }
    
    cout<<"No of Upperright moves is "<<upperrightcount<<endl;
}
//Lower Left
alllowerleftmoves(int startx,int starty,int destx,int desty,int sizeofmatrix){
    int lowerleft[2];
    int lowerleftcount=0;
    
        lowerleft[0]=startx+2;
        lowerleft[1]=starty-1;
    
    while(lowerleft[0] <=sizeofmatrix-1 && lowerleft[1] >=0){

       // cout<<"lowerleftmove:("<<lowerleft[0]<<","<< lowerleft[1]<<")"<<endl;
        lowerleftcount++;

        startx=lowerleft[0];
        starty=lowerleft[1];

        lowerleft[0]=startx+2;
        lowerleft[1]=starty-1;
      
    }
    
    cout<<"No of Lowerleft moves is "<<lowerleftcount<<endl;
}

//Lower right
alllowerrightmoves(int startx,int starty,int destx,int desty,int sizeofmatrix){
    int lowerright[2];
    int lowerrightcount=0;
    
        lowerright[0]=startx+2;
        lowerright[1]=starty+1;
    
    while(lowerright[0] <=sizeofmatrix-1 && lowerright[1] >=0){

       // cout<<"lowerRightmove:("<<lowerright[0]<<","<< lowerright[1]<<")"<<endl;
        lowerrightcount++;

        startx=lowerright[0];
        starty=lowerright[1];

        lowerright[0]=startx+2;
        lowerright[1]=starty+1;
      
    }
    
    cout<<"No of lowerright moves is "<<lowerrightcount<<endl;
}

//only left
onlyleft(int startx,int starty,int destx,int desty,int sizeofmatrix){
    int onlyleft[2];
    int onlyleftcount=0;
    
        onlyleft[0]=startx;
        onlyleft[1]=starty-2;
    
    while(onlyleft[1] >=0){

     //   cout<<"onlyleft move:("<<onlyleft[0]<<","<< onlyleft[1]<<")"<<endl;
        onlyleftcount++;

        startx=onlyleft[0];
        starty=onlyleft[1];

        onlyleft[0]=startx;
        onlyleft[1]=starty-2;
      
    }
    
    cout<<"No of onlyleft moves is "<<onlyleftcount<<endl;
}

//only right
onlyright(int startx,int starty,int destx,int desty,int sizeofmatrix){
    int onlyright[2];
    int onlyrightcount=0;
    
        onlyright[0]=startx;
        onlyright[1]=starty+2;
    
    while(onlyright[1] <=sizeofmatrix-1){

   //     cout<<"onlyright:("<<onlyright[0]<<","<< onlyright[1]<<")"<<endl;
        

        startx=onlyright[0];
        starty=onlyright[1];

        onlyright[0]=startx;
        onlyright[1]=starty+2;
        onlyrightcount++;
      
    }
    
    cout<<"No of onlyright moves is "<<onlyrightcount<<endl;
}
*/
//Possiblility of reaching
possibility(int startx,int starty,int destx,int desty,int sizeofmatrix){

    if(((startx%2)==0) && ((destx%2)==0)){
        cout<<"Possible"<<endl;
    }

    //when on even x 
    if((startx%2)!=0 && (destx%2)!=0 &&((startx+destx)%2==0)){
        cout<<"Possible"<<endl;
    }
    if(((startx%2)==0 && (destx%2)!=0)||((startx%2)!=0 && (destx%2)==0)){
        cout<<"Impossible"<<endl;
    }
    return 0;
}

int main(){

    int fx,fy,sx,sy,N;
    cin>>N;   
    cin>>sx>>sy; 
    cin>>fx>>fy;
   // cout<<"Matrix:"<<N<<"x"<<N<<endl;
   // cout<<"dest:"<<fx<<" "<<fy<<endl;
  //  cout<<"start:"<<sx<<" "<<sy<<endl;
    
   // possiblemoves(sx,sy,fx,fy,N);
  //  allupperleftmoves(sx,sy,fx,fy,N);
  //  allupperrightmoves(sx,sy,fx,fy,N);
  //  alllowerleftmoves(sx,sy,fx,fy,N);
  //  alllowerrightmoves(sx,sy,fx,fy,N);
  //  onlyleft(sx,sy,fx,fy,N);
  //  onlyright(sx,sy,fx,fy,N);
    possibility(sx,sy,fx,fy,N);
    
}