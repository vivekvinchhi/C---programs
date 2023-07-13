#include<iostream>
using namespace std;
int fac(int n)
{
    int i,f;
    f=1;
    cout<<"enter number to find its factorial : ";
    cin>>n;
    for ( i = 1; i < n; i++)
    {
        cout<<"value of f is "<<f<<endl;
        f=f*i;
        cout<<"faCTORIAL"<<f<<endl;
    }
    
   
}
int factorial(int n)
{
    
    if(n<0)
    return(-1);
    if (n==0)
        return(1);
    else
    {
        return(n*factorial(n-1));
    }
    
}
int main()
{
    int no,fact;
    cout<<"enter value of numkber :";
    cin>>no;
    fact=factorial(no);
    cout<<"factorial of given "<<no<<" is : "<<fact<<endl;
    fac();
    return 0;
}