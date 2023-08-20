#include<iostream>
using namespace std;

int triplate(int arr[],int size,int s){

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if(arr[i]+arr[j]+arr[k]==s){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    break;
                }
            }
            
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
    triplate(arr,n,10);
   
    return 0;
}