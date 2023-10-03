#include<iostream>
#include<vector>
using namespace std;

class vivek{
    public:
    int one = 1;


};

int main()
{
    vivek hero;
    cout<<hero.one;
    int rows,cols;
    cout<<"enter number of rows and columns "<<endl;
    cout<<"rows : ";
    cin>>rows;
    cout<<"cols : ";
    cin>>cols;
    int matrix[rows][cols];
    vector<int> temp;


    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    

    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int srow = 0;
    int scol= 0;
    int erow = rows-1;
    int ecol = cols-1;
    int count = 0;
    int total = rows*cols;


    while (count<total)
    {
        for (int i = scol; count<total & i <= ecol; i++)
        {
            temp.push_back(matrix[srow][i]);
            count++;
        }
        srow++;

        for (int i = srow; count<total & i <=erow; i++)
        {
            temp.push_back(matrix[i][ecol]);
            count++;
        }
        ecol--;
        for (int i = ecol; count<total & i >=scol; i--)
        {
            temp.push_back(matrix[erow][i]);
            count++;
        }
        erow--;
        for (int i = erow; count<total & i >=srow; i--)
        {
            temp.push_back(matrix[i][scol]);
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