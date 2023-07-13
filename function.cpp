#include<iostream>
using namespace std;
int a,b,c;
void add()
{
    cout<<"enter value of a"<<endl;
    cin>>a;
    cout<<"enter value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"sum of a and b is :"<<c<<endl;
}
int main()
{
    add();
    return 0;
}