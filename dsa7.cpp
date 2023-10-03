#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[3][3];
    vector<int> temp;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int sum = 0 ;
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        temp.push_back(sum);
        sum = 0;
    }
    cout<<"sum of rows are : ";
   for (int i = 0; i < temp.size(); i++)
   {
        cout<<temp[i]<<" ";
   }
   int max = -1;
   for (int i = 0; i < temp.size(); i++)
   {
        if (temp[i]>max)
        {
            max = temp[i];
        }
        
   }
   cout<<endl;
    cout <<"maximum sum from row : "<<max<<endl;

    // even column : top to bottom  odd column : bottom to top print

    for (int col = 0; col < 3; col++)
    {
        if (col%2 != 0 )
        {
            for (int row = 2; row >= 0 ; row--)
            {
                cout<<arr[row][col]<<" ";
            }
            
        }
        else
        {
            for (int row = 0; row < 3; row++)
            {
                cout<<arr[row][col]<<" ";
            }
            
        }
        
    }
    

    return 0;
}