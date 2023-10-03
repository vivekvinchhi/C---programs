#include<iostream>
using namespace std;

int fibonaci(int n){

    int a=0;
    int b=1;
    int s=0;

    cout<<a<<" "<<b;

    for (int i = 1; i <= n; i++)
    {
        s=a+b;
        cout<<" "<<s;
        a=b;
        b=s;
    }
    


}

int main()
{
    int n = 5;
    char f = 'a';
    // cin>>n;

for (int i = 1; i <=n; i++)
{
    for (int j = 1;j<=i;j++)
    {
        cout<<f;
        f++;
    }
    for (int k = n; k >i; k--)
    {
        cout<<" ";
        cout<<" ";
    }
    for (int l = i; l >=1; l--)
    {
        cout<<l;
    }
    cout<<endl;
    }
    
    fibonaci(10);
    return 0;
}