#include<iostream>
#include<string>
using namespace std;

int swap(char &a ,char &b){

    a = a+b;
    b= a-b;
    a= a-b;
}

string reverse(string arr){
    int size = arr.length();
    int i=0,j=size-1;
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    return arr;
}

bool palindrome( string arr){
    int size = arr.length();
    int i= 0;
    int j = size-1;
    while(i<j){
        if (arr[i]==arr[j])
        {
            return true;
        }
        else{
            return false;
        }
        
    }
}


int main()
{
    string arr = "viv";
    
    cout<<reverse(arr)<<endl;
    cout<<palindrome(arr);
    return 0;
}