#include<iostream>
using namespace std;

int sort(int arr[],int size){

    for (int i = 0,j = size-1; i<j; i++,j--)
    {
        while (arr[i]==0 && i<j)
        {
            i++;
        }
        while (arr[j]==1 && i<j)
        {
            j--;
        }
        if(i<j) 
        {
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        
       
    }
    

}



int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
     cout<<"array element : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}