#include<iostream>
using namespace std;
// 1
// 22
// 333
// 4444
int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
                cout<<i;     
        }
        cout<<endl;
    }
    

    return 0;
}