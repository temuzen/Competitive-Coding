//Iterated sum 
// input a,b
//constrains is 1<=a<=b<==100
//output sum of a*a,a+1*a+1, till b-1*b-1,b*b


    #include<iostream>
    using namespace std;

    int main(){
     //   cout<<"Hello World"<<endl;

        int a,b;
        cin>>a;
        cin>>b;

       // cout<<"No1 is "<< a <<endl;
       // cout<<"No2 is "<< b <<endl;   
    
        int arraysize = b-a;
      //  cout<<"array size should be "<< arraysize <<endl;   

        int x[arraysize];
        //int y[arraysize/2];
        int sum =0;

        for(int i=0;i<=arraysize;i++)
        {
            
            x[i]=(a+i)*(a+i);
            sum = sum + x[i];
           // 
          //  y[i]=(b-i)*(b-i);

        //    cout<<i<< " of x value is "<< x[i]<<endl;    
          //  cout<<i<< " of y value is "<< y[i]<<endl;    
                    

        }

        cout<<sum<<endl;

/*
        for(int i=0;i<=sizeof(arraysize);i++)
            {
                
            }
*/
    //        cout<<sum<<endl;


        }        

            
/*

        int sum=0;
        for(int i=0;i<arraysize/2;i++)
        {
            sum = sum + x[i]+y[i];
        }
*/
    //    cout<<"Sum is .. : "<< sum <<endl;    

    

