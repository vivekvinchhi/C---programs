#include<iostream>
using namespace std;
// abcd
// bcde
// cdef
// defg
int main()
{
    int n;
    cin>>n;

for (int i = 1; i <=n; i++)
{
    for (int j = 1;j<=n;j++)
    {   char ch = 'a'+i+j-2;
        cout<<ch;
    }
    cout<<endl;
    }
    

    return 0;
}