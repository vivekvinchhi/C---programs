#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    int abc[5];

    for (int i = 0; i<size ; i++){
        cin>>abc[i];
    }

    for (int j = 0; j < size; j++)
    {
        cout<<abc[j]<<" ";
    }
    


    return 0;
}