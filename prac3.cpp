#include<iostream>
using namespace std;
int fac()
{
    /*if (n<=0)
   return 1;
    else
    {
        return (n*fac(n-1)); 
    }*/
    int i,j,m,s[100];
    j=1;
    cout<<"entre no. for otys factorial : ";cin>>m;
    for(i=1;i<=m;i++)
    {
        j=j*i;
        cout<<"factorial is : "<<j<<endl;
    }
}
int main()
{
   /* int i;
    cout<<"enter number to get its factorial : ";
    cin>>i;
    cout<<"factorial of "<< i <<" is "<<fac(i); 
*/
fac();
}