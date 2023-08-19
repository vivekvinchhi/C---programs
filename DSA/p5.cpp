#include <iostream>
using namespace std;

int power()
{
    cout << "enter number and its power : ";
    int a, b;
    cin >> a;
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

bool iseven()
{
    cout << "enter number : ";
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int factorial(int n)
{
   if(n==0 || n==1){
    return 1;}
   
   else{
    return ((n*factorial((n-1))));
   }
}
int ncr(){
    int n ,r;
   
    cout<<"enter value of n and r : ";
     cin>>n;
    cin>>r;
    int nume=factorial(n);
    int deno = factorial(n-r)*factorial(r);
    int ans = nume/deno;

    return ans;
    }

    int ffdf(int a){
        a=a-2;
        return a;
    }

int main()
{
    // cout<<power()<<endl;
    // cout << iseven() << endl;
    // cout<<ncr();
    int a=15;
    ffdf(a);
    cout<<ffdf(a)<<endl;
    
    return 0;
}