#include<iostream>
using namespace std;

int binary(int arr[],int size,int s){
   
    int l = 0;
    int r = size-1;
   

    while (l<=r)
    {
        int mid =l+r/2;
        if (arr[mid]==s)
        {
            cout<<"Indext of elemnet is : "<<mid<<endl;
            break;
        }
        else if (s>arr[mid])
        {
            l=mid+1;
        }
        else{
            r = mid-1;
        }
        
        
        
    }
    
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    binary(arr,10,10);


    return 0;
}