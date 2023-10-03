#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int srow = 0 ;
    int scol = 0;
    int erow = row - 1;
    int ecol = col - 1;
    int count = 0;
    int total = row*col;
    vector<int> temp;
    
    // rotate
    while (count<total){

        for (int i = scol; i <=ecol ; i++)
        {
            temp.push_back(arr[erow][i]);
            count++;
        }
        erow--;
        for (int i = scol; i <=ecol ; i++)
        {
            temp.push_back(arr[erow][i]);
            count++;
        }
        erow--;
        for (int i = scol; i <=ecol ; i++)
        {
            temp.push_back(arr[erow][i]);
            count++;
        }
        erow--;
        
    }
    // print elements in arry after rorating
    for (int i = 0; i < temp.size(); i++)
    {
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    
    // print matrix of rotated element
    int rotate[row][col];
    int index = 0;
   
     for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        rotate[i][j] = temp[index++];
       }
    }
      for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        cout<<rotate[j][i]<<" ";
       }
       cout<<endl;
    }
    return 0;
}