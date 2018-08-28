#include<iostream>
using namespace std;


int sum(int num1,int num2){

    int summation = num1 + num2;
    return summation;
}


int main()
{
    int no1,no2;
    cin>>no1>>no2;
    int output = sum(no1,no2);
    cout<<output<<endl;

}
