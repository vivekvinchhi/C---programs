#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int* b=&a;
    cout<<"address of a is "<<b<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"value at a is\n "<<*b<<endl;
    int** c=&b;
    cout<<"address of pointer b is "<<&b<<endl;
    cout<<"address of pointer b is "<<c<<endl;
    cout<<"value of pointer b is "<<**c<<endl;
    return 0;
}