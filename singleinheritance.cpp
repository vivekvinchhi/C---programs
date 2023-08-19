#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int height;

    public :
    void speak(){
        cout<<"speaking"<<endl;
    }

};

class dog : public animal{

    public:
    void dod(){
        cout<< "barking";
    }
};


int main()
{
    dog obj1;
    obj1.speak();


    return 0;
}