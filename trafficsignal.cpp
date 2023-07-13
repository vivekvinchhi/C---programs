#include<iostream>
using namespace std;
int fac()
{
    int i,j,k;
    cout<<"enter number to to get its factorial : "<<endl;
    cin>>j;
    k=1;
    for ( i = 1; i < j; i++)
    {
        {cout<<"value of k :"<<k<<endl;
        k= i*k;
        cout<<k<<endl;
        }
        
    }
    
}
int main()
{
    fac();
    return 0;
}