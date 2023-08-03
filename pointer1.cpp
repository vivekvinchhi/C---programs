#include<iostream>
using namespace std;

int main()
{
    int arr[10]={5,7,9};

    cout<<"address of array : "<<arr<<endl;
    cout<<"address of array : "<<&arr<<endl;

    cout<<"address of array at [0] : "<<&arr[0]<<endl;

    cout<<"address of array : "<<*arr<<endl;

    cout<<"address of array : "<<*arr+1<<endl;

    cout<<"address of array at [1] : "<<*(arr+1)<<endl;

    cout<<"value of array by adding 1  : "<<(*arr)+1<<endl;

    cout<<"address of array : "<<*(2+arr)<<endl;

    cout<<sizeof(arr)<<endl;

    int *p = &arr[0];

    cout<<sizeof(*p)<<endl;
    
    cout<<sizeof(p)<<endl;

    
    cout<<"address of 0th : "<<&arr[0]<<endl;

    
    cout<<"address of 1st : "<<&arr[1]<<endl;
    
    cout<<"address of 2nd : "<<&arr[2]<<endl;

    // arr = arr+1;//error
    
    cout<<"address of pointer p : "<<&p<<endl;

    p=p+1;
    cout<<"address of 1st : "<<p<<endl;

    int kl[10]={1,23,5,634};
    cout<<"kl : "<<kl<<endl;

    char hj[5]="vive";
    cout<<"hj : "<<hj<<endl;
    char *b=&hj[0];
    cout<<"b1 : "<<b<<endl;
    
    cout<<"b2 : "<<*b<<endl;
    
    cout<<"b3 : "<<&hj[1]<<endl;

    cout<<"b4 : "<<&hj<<endl;

    cout<<"b5 : "<<&hj+1<<endl;
    
    cout<<"b6 : "<<&hj<<endl;
    char ch = 'v';
    
    char *c=&ch;
    cout<<c<<endl;














    return 0;
}