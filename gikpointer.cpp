#include<iostream>
using namespace std;

void print(int *p){

    cout<<"print  : "<<*p<<endl;
}

void sumarr(int arr[],int n){
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum += arr[i];
    }
    cout<<"sum : "<<sum<<endl;
    
}

void update(int *p){
   
    *p = *p + 1 ;
     p=p+1;
    cout<<"updated : "<<p<<endl;
}

int main(){
    int arr[6] = {1,23,5,65,3,9};
    int x=5;
    int *p = &x;
    cout<<"before : "<<p<<endl;
    print(p);
    cout<<"before : "<<*p<<endl;
    update(p);
    cout<<"after : "<<*p<<endl;
    sumarr(arr,5);
}