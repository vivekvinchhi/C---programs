#include<iostream>
using namespace std;

int main(){

char a;
cin>>a;
if ( a>='a' and a<='z')
{
    cout<<"enterd number is small"<<endl;
}
else if(a>='A' and a<='Z')
{
    cout<<"enterd number is capital"<<endl;
}
else {
   cout<<"number is not alphabet"<<endl;
    return 0;
}




}