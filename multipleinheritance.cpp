#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int height;

    public :
    virtual void bark(){
        cout<<"bark"<<endl;
    }

};

class human{
    public:
    int age;
    int height;

    public :
    virtual void speak(){
        cout<<"speaking"<<endl;
    }
};

class hybrid : public animal , public human{

};


int main()
{
    hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}