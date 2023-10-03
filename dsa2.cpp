//reverse the array
#include<iostream>
#include<math.h>
using namespace std;

int swapee(int &x, int &y){
    
    x=x+y;
    y=x-y;
    x=x-y;
}

int reverse(int arr[],int size){
    int s=0;
    int e=size-1;
    for (int i = s,j=e; i < j; i++,j--)
    {
        swapee(arr[i],arr[j]);
    }
    
}

int main()
{
    int arr[10] = {45,4,5,3,89,565,56,12,2,44};
    reverse(arr,10);

       for (int i = 0; i < 10; i++) {
        cout << arr[i] << ",";
    }


    return 0;
}