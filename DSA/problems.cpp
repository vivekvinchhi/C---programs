// reverse given interger

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    int ans=0;
    while(num!=0){

        int digit = num%10;
        ans = ans*10+digit;
        num=num/10;
    }
    cout<<ans;
    cout<<INT32_MAX;
    return 0;
}