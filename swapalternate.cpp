#include<iostream>
using namespace std;

int swap(int arr[],int art[]){

    int x,y;
    x=x+y;
    y=x-y;
    x=x-y;
}

int swapalternate(int arr[],int size){

    for (int i = 0; i <size-1; i+=2)
    {
        swap(arr[i],arr[i+1]);
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

    int arr[] = {45,65,6,32,84,32};

    int size = sizeof(arr)/4;

    swapalternate(arr,size);
    printarray(arr,size);

    return 0;
}