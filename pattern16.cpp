#include<iostream>
using namespace std;

//      *
//     **
//    ***
//   ****
//  *****

int main()
{
    int n;
    cin>>n;

for (int i = 1; i <=n; i++)
{
    // printing space
    int space=n-i;
    for (int k=0 ; k<=space ; k++)
    {
        cout<<" ";
    }
    
    
    for (int j = 1;j<=i;j++)
    {
        cout<<"*";
    }


    
    cout<<endl;
    }
    

    return 0;
}