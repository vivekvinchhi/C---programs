#include<iostream>
using namespace std;
// 1
// 23
// 345
// 4567
int main()
{
    int n,count=1;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        
        int v=i;
        for (int j = 1; j <=i; j++) // for (int j = i; j <=i; j++)
        {                           //{
           cout<<v;                 //  cout<<i+j-1;
           v++;                     //}
        }                           
    
        cout<<endl;

        
    }
    

    return 0;
}