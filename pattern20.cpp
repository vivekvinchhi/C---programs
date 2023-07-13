#include<iostream>
using namespace std;

// 
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

int main()
{
    int n;
    cin>>n;

for (int i = 1; i <=n; i++)
{
    for (int j = 1;j<=n-i+1;j++)
    {
        cout<<j;
    }

    for (int j = n; j >=n-i+2; j--)
    {
        cout<<"*";
    }
    for (int k = 1; k <=i-1; k++)
    {
        cout<<"*";
    }
    for (int m = n-i+1; m >0; m--)
    {
        cout<<m;
    }
    




    cout<<endl;
    }
    

    return 0;
}