#include<iostream>
using namespace std;

class test{

    int num;

    public:
    test(): num(8){}

    void operator ++(){
        num=num+2;
    }
    void show(){
        cout<<"the count is = "<<num<<endl;
    }
};

int main(){

    test obj;
    ++obj;
    obj.show();
    return 0;

}