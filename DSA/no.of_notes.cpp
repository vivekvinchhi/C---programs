#include<iostream>
using namespace std;

int main()
{
    int n = 1330;
    int a=100 , b=50 ,c=20 ,d=10;
    int p=n/100;
    n=n-p*100;
    int q=n/20;
    n=n-q*20;
    int r=n/10;
    n=n-r*10;
    cout<<p<<" "<<q<<"  "<<r;
    return 0;
}