#include<iostream>
#include <vector>
using namespace std;

int rotate(vector <int>& arr,int k){

    vector <int> nw(arr.size());

    for (int i = 0; i <arr.size(); i++)
    {
        nw[(i+k)%arr.size()] = arr[i];
    }
    
    arr = nw;
    
}

int main()
{
    vector <int> arr = {1,2,3,4,5};
    rotate(arr,3);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}