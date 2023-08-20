#include<iostream>
using namespace std;

int unique(int arr[],int size){

    int uni = 0;

    for (int i = 0; i < size; i++)
    {
        uni^=arr[i];
        
    }

    return uni;
    
}


int main()
{
    int uni[]={1,2,3,2,3,1,5,7,8,7,8};
    int size = sizeof(uni)/4;
    cout<<unique(uni,size)<<" ";

    return 0;
}