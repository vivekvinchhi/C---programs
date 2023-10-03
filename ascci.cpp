#include<iostream>
#include<vector>
using namespace std;

int assci(string s){

    vector<int> arr;
    for (int  i = 0; i < s.length(); i++)
    {
        int a = static_cast<int>(s[i]);
        arr.push_back(a);   
    }

    int max = -1;
    int min = 1000;
    for (int i = 0; i < arr.size(); i++)
    {
        
        if (arr[i]>max)
        {
            max = arr[i];
        }

        if (arr[i]<min)
        {
            min = arr[i];
        }
        
        
    }

    cout<<"max : ";
    cout<<max<<endl;
    cout<<"min : ";
    cout<<min<<endl;
}

int main()
{
    cout<<"enter string : ";
    string s ;
    cin>>s;
    assci(s);
    return 0;
}