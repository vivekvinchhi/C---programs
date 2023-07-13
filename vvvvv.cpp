#include<iostream>
using namespace std;
int main()
{
    int a=45,b;
    cout<<"value of a is "<<a<<endl;
    a=63;
    cout<<"value of a is"<<a<<endl;
    const int c=55;
    cout<<"vale of c is "<<c<<endl;
    cout<<"vale of c is"<<c<<endl;
    cout<<"enter value of b"<<endl;
    cin>>b;

    if (b<55)
   { cout<<"it is not valid"<<endl;
   }
    else if (b>55)
    {cout<<"valid b"<<endl;
    }
    else
    {
        cout<<"entered value is valid "<<endl;
    }
    switch (b)
    {
    case 1:
    cout<<"enterd value is 1";
        break;
    case 45:
    cout<<"enterd vale is 45";
    break;
    default: cout<<"enterd value is not valid";
        break;
    }
    
    return 0;
}