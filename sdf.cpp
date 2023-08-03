#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 4;
    // cin>>n;
    int g=7;

for (int i = n; i >=1; i++)
{
    // setw(n-i);
    for (int j = n;j>=i;j--)
    {
        cout<<g<<" ";
        ++g;
        

    }
    cout<<endl;
    g = g-(n+2*i);
    }
    

    return 0;
}