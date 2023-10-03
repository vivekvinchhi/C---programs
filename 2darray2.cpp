#include<iostream>
using namespace std;

bool find(int arr[][4],int target,int row, int col){

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
            
        }
        
    }
    return 0 ;
}


int main()
{
    int arr[3][4]= {1,2,3,5,6,45,4,6,2,8,9,12};
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    if (find(arr,55,3,4))
    {
        cout<<"element found";
    }
    else
    {
        cout<<"element not found";
    }
    
    return 0;
}