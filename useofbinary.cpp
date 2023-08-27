#include<iostream>
using namespace std;

int firstoccu(int arr[], int size,int k){

    int s=0;
    int e= size-1;
    int result=-1;
    while(s<=e){
       int mid = s+(e-s)/2;

        
        if (arr[mid] == k)
        {
            result=mid;
            e=mid-1;
            
            
        }
        
        else if (arr[mid] < k)
        {
            s=mid+1;
        }
        else if (arr[mid]>k)
        {
            e=mid-1;
        }
        
        
    }
    
return result;

}

int lastoccu(int arr[], int size,int k){

    int s=0;
    int e= size-1;
    int result=-1;
    while(s<=e){
       int mid = s+(e-s)/2;

        
        if (arr[mid] == k)
        {
            result=mid;
            s=mid+1;
            
            
        }
        
        else if (arr[mid] < k)
        {
            s=mid+1;
        }
        else if (arr[mid]>k)
        {
            e=mid-1;
        }
        
        
    }
    
return result;

}

int main()
{
    int arr[7]={1,3,3,3,3,5};
    cout<<"number of occurence of 3 : "<<lastoccu(arr,7,3)-firstoccu(arr,7,3)+1<<endl;
    return 0;
}