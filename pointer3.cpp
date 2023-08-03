#include<iostream>
using namespace std;

void add(int **ptr2){

    // ptr2 = ptr2 + 1; //no change
    // *ptr2 = *ptr2 + 1 ; //increament in value of p1 (increament in address of x)
    **ptr2 = **ptr2 + 1;
}


int main(){

    int x = 9;
    int* p1 = &x;                    
    int** p2 = &p1;


    // printing value of x

    cout<<"value of x : "<<x<<endl;
    
    cout<<"value of x : "<<*p1<<endl;
    
    cout<<"value of x : "<<**p2<<endl<<endl;


    // printing address of x

    cout<< "Address of x :  "<<&x<<endl;
    
    cout<< "Address of x :  "<<p1<<endl;
    
    cout<< "Address of x :  "<<*p2<<endl<<endl;

    // printing value of p1

    
    cout<< "value of p1 :  "<<&x<<endl;
    cout<< "value of p1 :  "<<*p2<<endl<<endl;

    // printing address of p1

    cout<<"Address of p1 : "<<&p1<<endl;
    cout<<"Address of p1 : "<<p2<<endl<<endl;
    
    // printing value of p2

    cout<< "value of p2 :  "<<p2<<endl;
    cout<< "address of p2 :  "<<&p2<<endl;


    cout<<"value before : "<<x<<endl;
    cout<<"value before : "<<p1<<endl;
    cout<<"value before : "<<p2<<endl<<endl;
    add(p2);
    cout<<"value after : "<<x<<endl;
    cout<<"value after : "<<p1<<endl;
    cout<<"value after : "<<p2<<endl;
    
}