#include<iostream>
using namespace std;

int factorial(int n){
    
    if(n<0){
        return -1;
    }
    else if (n==0)
    {
        return 1;
    }
    else{
        return(n*factorial(n-1));
    }
    cout<<n;
}

int factorialfor(int n){
     if(n<0){
        return -1;
    }
    else if (n==0)
    {
        return 1;
    }
    else{
        int s=1;
        for (int i = 1; i <=n; i++)
        {
            s=s*i;
        }
        cout<<s<<endl;
    }
}

int main()
{
    cout<<factorialfor(5);
    return 0;
}