#include<iostream>
using namespace std;

int main()
{
    int a=3,b=3,c=4,d=0,e=0;
    //d = ++a + ++a + ++a + ++a + b++ + ++b + c++ + ++c + a + b + c;
    // e = (++a) + (++a);
    d = ++a + ++a + ++a + ++a + a;
    cout<<""<<a<<endl;
    // cout<<""<<b<<endl;
    //cout<<""<<c<<endl;
    cout<<""<<d<<endl;
    //   cout<<"e = "<<e<<endl;
    return 0;
    
}