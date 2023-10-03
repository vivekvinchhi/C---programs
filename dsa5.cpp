#include<iostream>
#include<string>
using namespace std;

char repla(string &s){
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]==' ')
        {
            s[i] = '@';
        }
    }
    
}

string findsubstringandreplace(string s,string part){
        
        
        while (s.length()!=0 && s.find(part),part.length())
        {
            s.erase(s.find(part),part.length());
        }   
        return s;
}


int main()
{
    string s;
    cout<<"enter a string  : ";
    cin>>s;
    // repla(s);
    findsubstringandreplace(s , "abc");
    cout<<s;
    return 0;
}