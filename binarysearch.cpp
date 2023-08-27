#include<iostream>
using namespace std;

int binary(int arr[],int size,int f){
   
    int s = 0;
    int e = size-1;
   

    while (s<=e)
    {
        int mid =s+(e-s)/2;
        if (arr[mid]==f)
        {
            cout<<"Indext of elemnet is : "<<mid<<endl;
            break;
        }
        else if (f>arr[mid])
        {
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        
        
        
    }
    return -1;
    
}

int main()
{
    int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
    binary(arr,11,2);


    return 0;
}