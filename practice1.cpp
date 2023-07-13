#include<iostream>
using namespace std;
int time(int ,int);
int main()
{
    int num1,num2;
    cout<<"enter number 1 :";
    cin>>num1;
    cout<<"enter number 2 :";
    cin>>num2;
   cout<<"multiplication of "<<num1<<" and "<<num2<<" is :"<<time(num1,num2);

}
int time(int a,int b)
{
    return(a*b);
    
}

