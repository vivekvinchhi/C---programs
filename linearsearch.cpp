#include<iostream>
using namespace std;


int linearsearch(int arr[],int size , int findele){

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==findele)
        {
            cout<<"element found";
            break;
        }
       
    }
    
return 0;

}

int main()
{
    int size;
    cout<<"enter size of an array : ";
    cin>>size;
    int lsarr[size];
     for (int i = 0; i < size; i++)
    {
        cin>>lsarr[i];
    }

    int findelement;
    cout<<"enter element you want to find :";
    cin>>findelement;

   

    linearsearch(lsarr,size,findelement);
    
    return 0;
}