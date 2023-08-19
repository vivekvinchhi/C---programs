#include <iostream>
using namespace std;
 int checkmax(int arr[],int d){

        int f= INT32_MIN;

        for(int i = 0 ; i<d;i++){
            if(arr[i]>f){
               f = arr[i];
            }
        }
        return f;
    }

    int checkmin(int arr[],int d){
        int min = INT32_MAX;

        for (int i = 0; i < d; i++)
        {
            if (arr[i]<min)
            {
               min = arr[i];
                
            }
            
        }
        return min;
    }
int main()
{

    // array declaration
    int number[100];
    // array intialization
    int marks[7] = {88, 89, 87, 55, 66, 95, 75};

    int n = sizeof(number) / sizeof(int);
    if (sizeof(int) == 4)
    {
        cout << "size of integer is 4 byte" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        number[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << number[i]<<",";
    }
    
    int arr[]= {1,2,3};
    int size = sizeof(arr)/sizeof(int);

    // cout<<endl<<"size of arr : "<<size;

    int check[] = {15,66,89,54};
    cout<<endl<<checkmax(check,4)<<endl;
    cout<<checkmin(check,4)<<endl;
    
   
    
   



    
   
}