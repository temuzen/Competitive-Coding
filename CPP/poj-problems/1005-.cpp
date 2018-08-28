#include<iostream>
#include<cmath>
using namespace std;



 float noofyears(float xcord,float ycord,float radius){
        int Years=0;
        
        while(radius>=min(xcord,ycord)){
            Years++;
        }

        return Years;
    }


int main()
{

    int N,x,y;
    cin>>N;
    float result;
    int Year[N];
    float r;
  
    float areashrinked = 50; 
    float areatosemicircle;
    r = sqrt(areashrinked/3.14);


    for(int i=0;i<N;i++)
    {

            cin>>x>>y;
            float result = noofyears(x,y,r);
            Year[i] = result;
    }

    for(int j=0;j<N;j++)
    {

           cout<<Year[j]<<endl;
     
    }
    
}

//Need reasoning....

