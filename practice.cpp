#include<iostream>
using namespace std;
int table()
{
    int n,i,j;
    cout<<"enter a number to get its table : ";
    cin>>n;
    cout<<"enter a range of a table :";
    cin>>j;
    for(i=1;i<=j;i++)
    {
        cout<<n<<" * "<<i<< " = "<<i*n<<endl;
        
    }
}
int main()
{
    table();

}