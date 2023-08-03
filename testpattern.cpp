#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

for (int i = 1; i <=n; i++)
{
    for (int j = n;j>=i;j--)
    {
        cout<<"*";
    }
    for (int k = 2;k<i*2;k++)
    {
        cout<<" ";
    }
    // for (int m = 2;m<=i;m++)
    // {
    //     cout<<" ";
    // }
    for (int j = n;j>=i;j--)
    {
        cout<<"*";
    }

    cout<<endl;
    }
    for (int i = 1; i <=n; i++)
{
    for (int j =1;j<=i;j++)
    {
        cout<<"*";
    }
    for (int k = n-1;k>=i;k--)
    {
        cout<<" ";
    }
    for (int k = n-1;k>=i;k--)
    {
        cout<<" ";
    }
    for (int j =1;j<=i;j++)
    {
        cout<<"*";
    }
    
    cout<<endl;
    }
    

    return 0;
}