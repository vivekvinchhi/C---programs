// number of occurance of character with its number of occurance {a,a,b,b,b,c,d,d,e}=>{a,2,b,3,c,d,2,e}

#include<iostream>
#include<string>
using namespace std;

string numberoccr(string s){

    int arr[26]={0};
    string temp = "";
    for (int  i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = ch - 'a';
        arr[number]++;
    }

    for (int j = 0; j < 26 ; j++)
    {
        if (arr[j]==1)
        {
            temp.push_back('a'+j);
        }
        else if (arr[j]>1)
        {
            temp.push_back('a'+j);
            temp.push_back(arr[j]+'0');
        }
        
        
    }
    
    return temp;
    
}

int main()
{
    string s= "abbbbbbbbbbbb";
    cout<<numberoccr(s);
    return 0;
}