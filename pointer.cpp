#include<iostream>
using namespace std;

int main()
{
    int a=90;
    cout<<a<<endl;
    cout<<"address of a : "<<&a<<endl;

    int *p=&a;
    cout<<"value at pointer : "<<*p<<endl;

    cout<<"address of pointer : "<<&*p<<endl;
// when 
    int *s=0;
    int z=33;
    s=&z;       //*p=&a;  both are same 
    cout<<"vlaue of z : "<<*s<<endl;
    cout<<"Adderess of z : "<<s<<endl;

    int g=5,h=7;
    int *i=&g ,*j=&h;
    *i=*i + *j;
    *j=*i - *j;
    *i=*i - *j;
    cout<<g<<endl;
    cout<<h<<endl;
    
    i=i+1;
    cout<<i<<endl;


    return 0;

   
}