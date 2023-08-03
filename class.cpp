#include<iostream>
using namespace std;


class vivek{

    int num;
    string name;
    public:
    char surname;

    // int and char can not be assecced oput of this class so we make a getter and settr method

    int getnum(){
        return num;
    }

    string getname(){
        return name;

    }
    void setnum(int x){
        num = x;

    }
    void setname(string y){
        name = y;
    }

};

int main(){

    vivek obj1;
    // cout<<obj1.num<<end;   --->this will give an error because private can't be accessed 
    obj1.setnum(99);
    obj1.setname("vivek vinchhi");
    cout<<"value of private num is :"<<obj1.getnum()<<endl;
    cout<<"Value of private name is :"<<obj1.getname()<<endl;
    cout<<sizeof(obj1)<<endl;
}

