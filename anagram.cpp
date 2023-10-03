#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1;
    string s2;
    cout<<"enter 1st string : ";
    cin>>s1; 
    cout<<"enter 2nd string : ";
    cin>>s2;
    int a =  s1.length();
    int b= s2.length();
    if (a==b)
    {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

        if (s1==s2)
        {
            cout<<"entered number is anagram";
        } 
    }
     else
        {
            cout<<"entered number is not anagram";
        }
    
    return 0;
}