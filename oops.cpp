// inheritance

#include <iostream>
using namespace std;


class inherit
{

public:
   void fun1(){
     cout << "this is inherit class"<<endl;
   }
    
};

class abstract{

virtual void funcvirtual()=0;

};

class child : public inherit , public abstract
{
    public:
    void funcchild(){
        cout<<"this is a child class"<<endl;
    }
    
    void funcvirtual(){
        cout<<"virtual function inheritade in child for abstraction"<<endl;
    }
};

class son : public child{

    public:
    void funcchild(){
         cout << "this is son class and will override child"<<endl;
    }
};

class daughter : public son
{
    public:
    void overload(){
         cout << "daughter is goig to overload"<<endl;
    }

    void overload(int x){
         cout << "daughter has overloaded for "<<x<<"st time"<<endl;
    }

    void funcvirtual(){
        cout<<"need for virtual class for abstraction"<<endl;
    }
};

int main(){

    inherit obj1;
    child obj2;
    son obj3;
    daughter obj4;
    obj1.fun1();
    obj2.fun1();
    obj2.funcchild();
    obj2.funcvirtual();
    obj3.fun1();
    obj3.funcchild();
    obj3.funcvirtual();
    obj4.fun1();
    obj4.funcchild();
    obj4.overload();
    obj4.overload(1);




}