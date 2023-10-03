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
    

for (int i = 0; i <n; i++)
{
    char ch = 'a'+i;
    for (int j = 1;j<=n;j++)
    {  
        //  char ch = 'a'+i+j-2;
        cout<<ch;
        ch++;
    }

    cout<<endl;
    }
    

    return 0;
}