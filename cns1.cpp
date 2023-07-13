#include<iostream>
using namespace std;
int main()
{
    int i,key;
    char ch,a[100];
    cout<<"enter string"<<endl;
    cin.getline(a,100);
    cout<<"enter vlaur of key"<<endl;
    cin>>key;
    for ( i = 0; a[i]!='\0'; ++i)
    ch=a[i];
    {
        if (ch>='a' && ch<='z')
        {

            ch= ch+key;
            a[i]=ch;
        }
        cout<<"decreapted value is :"<<a<<endl;
    }
    

}