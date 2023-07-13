#include<iostream>
using namespace std;
// 1
// 23
// 456
// 78910
int main()
{
    int n, count=1;
    cin>>n;


    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout<<i+j-1;
            count = count+1;
        }
        cout<<endl;
    }
    

    return 0;
}