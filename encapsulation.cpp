// encapsulation : wraping up of data into a single unit


#include<iostream>
using namespace std;


class vivek{

    private:
    int a;
    string  vivek;
    int age=15;

    public:
    int hair;
    int height;
    int getage(){
        return age;
    }

};

class human : public vivek{

    public:
    void pr(){
        cout<<"printing something";
    }


};

int main()
{

    human obj1;
    cout<<obj1.hair<<endl;




    return 0;
}