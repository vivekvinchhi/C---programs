#include<iostream>
using namespace std;
int main(){

    int n=5;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for (int k = n; k>=i ; k--)
        {
            cout<<"*";
           
        }
        for (int k = n; k>i ; k--)
        {
            
            cout<<"*";
        }

        for (int n = i; n>=1; n--)
        {
            cout<<n;
        }
        
        
     cout<<endl;   
    }
    //  int a = -858;

    // int a;
    // a = cin.get();
    // cout<<a;

    int a=0;
    int b=1,s;
    // cout<<a<<","<<b<<",";
    // for (int i = 0; i < n; i++)
    // {
    //     s=a+b;
    //     cout<<s<<",";
    //     a=b;
    //     b=s;
    // }
    int z=4567;
    int f = 0,ans;
    while (z!=0)
    {
        s=z%10;
        f=f*10+s;
        z=z/10;

    }
    cout<<f;
    


}