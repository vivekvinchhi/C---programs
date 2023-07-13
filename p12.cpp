#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c;
    c=a+b;
     cout<<"sum = :"<<c<<endl;
    return c;
    
}
int main()
{
    int a,b;
    cout<<"enter value of a :"<<endl;
    cin>>a;
    cout<<"enter value of b :"<<endl;
    cin>>b;
    cout<<"sum of a and b is "<<sum(a,b)<<endl;
    return 0;
}