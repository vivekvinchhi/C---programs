#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    // cin>>n;

for (int i = 1; i <=n; i++)
{
    for (int j = 1;j<=i;j++)
    {
        cout<<j;
    }
    for (int k = n; k >i; k--)
    {
        cout<<" ";
        cout<<" ";
    }
    for (int l = i; l >=1; l--)
    {
        cout<<l;
    }
    
    


    cout<<endl;
    }
    

    return 0;
}