#include<iostream>
using namespace std;

int intersect(int arr[],int two[],int one,int to){

    for (int i = 0; i < one; i++)
    {
        for (int j = 0; j < to; j++)
        {
            if(arr[i]==two[j]){
                cout<<arr[i]<<" ";
                two[j]=INT32_MIN;
                break;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[]= {1,2,2,2,3,4};
    int two[]={2,2,3,3};
    intersect(arr,two,6,4);
    
    return 0;
}