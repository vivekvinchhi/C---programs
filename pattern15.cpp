#include<iostream>
using namespace std;
// d
// cd
// bcd
// abcd
int main()
{
    int n;
    char ch;
    cin>>n;

for (int i = 1; i <=n; i++)
{char ch = 'a'+n-i;
    for (int j = 1;j<=i;j++)
    {   
        cout<<ch;
        ch++; 
    }
    
    cout<<endl;
    }
    

    return 0;
}