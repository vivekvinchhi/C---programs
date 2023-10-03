#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int row = 3;
    int col = 3;
    int arr[row][col];
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

    int srow= 0;
    int scol = 0;
    int erow = row-1;
    int ecol = col-1;

    int count  = 0;
    int total = row*col;
    while (count < total)
    {   
        // starting row
        for (int i = scol;count < total && i <= ecol; i++)
        {
            temp.push_back(arr[srow][i]);
            count++;
        }
        srow++;
        
        // ending column
        for (int i = srow;count < total && i <=erow; i++)
        {
            temp.push_back(arr[i][ecol]);
            count++;
        }
        ecol--;

        // ending row
        for (int i = ecol;count < total && i >= scol; i--)
        {
            temp.push_back(arr[erow][i]);
            count++;
        }
        erow--;

        // starting column
        for (int i = erow;count < total && i >=srow; i--)
        {
            temp.push_back(arr[i][scol]);
            count++;
        }
        scol++;
    }

    for (int i = 0; i < temp.size(); i++)
   {
        cout<<temp[i]<<" ";
   }
    
    return 0;
}