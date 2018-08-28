#include<iostream>
#include<algorithm>
//#include<functional>
using namespace std;

int main(){
//Single street version..
    int streets;
    int houses;
    cin>>streets;
    int mindist[streets];
    int cumdist =0;
//For multiple streets we'll use 2d arrray..

for(int x=0;x<streets;x++){
    mindist[x]=0;
    cin>>houses;
    int Origindistance[houses];
    int Absdistance[houses-1]; 

    for(int i=0;i<houses;i++){
        cin>>Origindistance[i];
    }
/*
   for(int i=0;i<houses;i++){
        cout<<Origindistance[i]<<endl;
    }
 */

//sorting.

 //size_t size = sizeof(Origindistance) / sizeof(Origindistance[0]); 
  
  sort(Origindistance, Origindistance + houses);

  for (int i = 0; i<houses-1; ++i) { 
     Absdistance[i] = abs(Origindistance[i]-Origindistance[i+1]);
     mindist[x] = mindist[x] + Absdistance[i];    
  }
/*
  cout<<"locarion..."<< endl;
  for (int i = 0; i<houses; ++i) {
     cout << Origindistance[i] << ' ';
  }
  */  
 // cout <<"Abs distance"<<endl;
/*
  for (int i = 0; i<houses-1; ++i) {
   //  cout << Absdistance[i] << ' ';
     mindist = mindist + Absdistance[i];       
  }  
*/
  //cout<<"Min distance is := "<<mindist<<endl;
 // cumdist = cumdist + mindist[x]; 
  //cout<<mindist[x]<<endl;
  //cout<<cumdist<<endl;
  //cout<<"min dist for street "<<x<<"is :"<<mindist[x]<<endl;
}
 //   cout<<"Printing the min dist for each street"<<endl;
    for(int z=0;z<streets;z++){
    cout<<mindist[z]<<endl;

    }
/*
    for(int i=0;i<houses;i++){
        cout<<Origindistance[i]<<endl;
    }
    
*/

}