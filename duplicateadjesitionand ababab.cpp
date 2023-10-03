#include<iostream>
using namespace std;
// duplicateadjecent  
// aaa*bbb = > ababab
string ff(string s){
    string temp = "";
    int g = s.find("*");
    int k=1;
    for (int  i = 0; i < g; i++)
    {
        temp.push_back(s[i]);
        int h=g+1+i;
        temp.push_back(s[h]);
        
    }
    return temp;
}

string duplicateadjecent(string &s){


for (int i = 0; i < s.length()-1; )
{
    
    if (s[i]==s[i+1])
    {
       s.erase(i,2);
        i = 0;
    }
    else{
      i++;}  
}

return s;

}

int main()
{
    string s = "aaca";
    cout<<duplicateadjecent(s);

    return 0;
}