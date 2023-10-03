#include<iostream>
using namespace std;

//     1
//    121
//   12321
//  1234321
// 123454321
int main()
{
    int n;
    cin>>n;

for (int i = 1; i <=n; i++)
{

    for (int k = n; k >=i; k--)
    {
        cout<<" ";
    }
    for (int j = 1; j <=i ; j++)
    {
        cout<<j;
    }
    for (int m = i-1; m > 0; m--)
    {
        cout<<m;
    }
    cout<<endl;
    }

    return 0;
}