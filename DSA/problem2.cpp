// true if power of 2 else false

#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;

    for (int i = 0; i < 31; i++)
    {
        int ans = pow(2,i);
        if(n == ans ){
        cout<< "true";
        }
        else{
            cout<<"false" ;
        }
    }
    

    
    return 0;
}