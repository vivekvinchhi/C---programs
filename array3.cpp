#include<iostream>
using namespace std;

int swap(int arr[],int are[]){
    int x,y;
    x=x+y;
    y=x-y;
    x=x-y;
}

int reversearray(int arr[],int size){


    for(int i = 0,j = size-1 ;i < j; i++ , j-- ){
        swap(arr[i],arr[j]);
    }  
}

int printarray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int rev[] = {10,54,66,22,33,88};
    int size = sizeof(rev)/sizeof(int);
    reversearray(rev,size);
    printarray(rev,size);
    return 0;
}