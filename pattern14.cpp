#include<iostream>
using namespace std;
// a
// bc
// cde
// defg
// efghi

int main()
{
    int n;
    cin>>n;

for (int i = 0; i <n; i++)
{
    char ch = 'a'+i;
    for (int j = 0;j<=i;j++)
    {
        // char ch='a'+i+j-2;
        cout<<ch;
        ch++;
        
    }
    cout<<endl;
    }
    

    return 0;
}