#include<iostream>
using namespace std;
// abc
// abc
// abc
int main()
{
    int n;
    cin>>n;

for (int row= 1; row <=n; row++)
{
    for (int column = 1;column<=n;column++)
    {
        char ch = 'a'+column-1; 
        cout<< ch;
    }
    cout<<endl;
    }
    

    return 0;
}