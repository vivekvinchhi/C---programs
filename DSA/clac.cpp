#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"enter two number :";
    cin>>a>>b;
    char o;
    cout<<"enter sign of operation : ";
    cin>>o;
    switch(o){
        case '*' : cout<<a*b;
        break;
        case '+' : cout
        <<a+b;
        break;
        case '-' : cout<<a-b;
        break;
        case '/' : cout<<a/b;
        break;
        default:cout<<"invalid operator";
        break;   
    }
    return 0;
}