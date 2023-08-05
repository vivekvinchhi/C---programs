#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    bool a=1;
    cout<<"size of bool : "<<sizeof(a)<<endl;

    // unsigned int 

    int b= -123;
    cout<<b<<endl;

    int x = 2.22/3;
    cout<<x<<endl;
    cout<<2.22/3<<endl;



    // operators

    if(a>=0){
        cout<<"a is 0 or greater"<<endl;
    }

    // int b= 5 ;
    if (b>10){
        cout<<"b is not > 10 "<<endl;
    }
    else if(b<5){
        cout<<"b id < 5"<<endl;
    }
    else
    {
        cout<<"b os 5"<<endl;
    }


    // int s,f;
    // cin>>s >>f;
    // cout<<s<<endl;
    // cout<<f<<endl;
    int l;
    l = cin.get();
    cout<<l;

    return 0;
}