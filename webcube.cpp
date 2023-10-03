#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int mathch(int arr[][3],int row,int col){

    vector<int> even ;
    vector<int> odd ;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j]%2==0)
            {
                even.push_back(arr[i][j]);     
            }
            else
            {
                odd.push_back(arr[i][j]);
            }
        }
        
    }
    cout<<"even number : ";
    for (int num : even){
        cout<<num<<" ";
    }
    cout<<endl;

    cout<<"odd number : ";
     for (int num : odd){
        cout<<num<<" ";
    }
    cout<<endl;
    int sumeven = 0;
    for (int i = 0; i < even.size(); i++)
    {
        sumeven = sumeven + pow(even[i],even[i]);
    }

    cout<<"sum of even number : "<<sumeven<<endl;
 
    int sumodd = 0;
    for (int i = 0; i < odd.size(); i++)
    {
        sumodd = sumodd + pow(odd[i],odd[i]);
    }
    
    cout<<"sum of odd number : "<<sumodd<<endl;
    
    int ans = sumeven - sumodd;
    cout<<"Required ans is : "<<ans;
}

int main()
{
    int arr[3][3];
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
    
    mathch(arr,3,3);
    return 0;
}