
//max occurance string

#include<iostream>
using namespace std;

char maxoccu(string s){
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = ch - 'a';
        arr[number]++;
    }

    int max=-1,ans=0;
    for (int  j = 0; j < 26; j++)
    {
        if (arr[j]>max)
        {
            max=arr[j];
            ans=j;
        }
        
    }
    return 'a'+ans;
    
}



int main()
{
    string s = "vivek";
    cout<<maxoccu(s);
    
    return 0;
}