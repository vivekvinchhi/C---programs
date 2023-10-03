#include<iostream>
using namespace std;

int maxs(int arr[], int size){
    int d = INT32_MIN;
    for (int i = 0;i<size;i++){
        if (arr[i]>d){
            d= arr[i];
        }
    }
    cout<<"maximum value : "<<d<<endl<<endl;
}

int mins(int arr[],int size){
    int d = INT32_MAX;
    for (int i = 0; i<size;i++){
        if (arr[i]<d)
        {
            d=arr[i];
        }
        
    }
    cout<<"minimum value : "<<d<<endl;
}
int main()
{
    int arr[10] = {45,4,5,3,89,565,56,12,2,44};
    maxs(arr,10);
    mins(arr,10);

    return 0;
}