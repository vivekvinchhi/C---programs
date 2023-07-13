#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

for (int i = 1; i <=n; i++)
{
    for (int j = n-i;j>0;j--)
    {
        cout<<" ";
    }

    for (int k = 1; k<=i; k++)
    {
        cout<<"*";
    }
    for (int m = 2; m <=i; m++)
    {
        cout<<"*";
    }
   
    cout<<endl;
    }
    for (int p = 1; p <=n; p++)
    {
         for (int x = 1; x <= p; x++)
    {
        cout<<" ";
    }
    for (int y = n; y >p ; y--)
    {
        cout<<"*";
    }
    for (int z = n; z >= p+2; z--)
    {
        cout<<"*";
    }
    
    cout<<endl;
    }
    

    return 0;
}