#include<iostream>
using namespace std;

int palindrome(int n){
    int ans = 0;
    int num =n;
    while (n !=0)
    {
        int digit = n%10;
        ans = ans*10+digit;
        n=n/10;

    }
    // cout<<ans;

    if (ans == num)
    {
        cout<<"Entered number is palindrome";
    }
    else
    {
        cout<<"Enetrd number is not a palindrome number";
    }
    
    

    
    
}

int main()
{
    int a = 1112;
    palindrome(a);

    return 0;
}