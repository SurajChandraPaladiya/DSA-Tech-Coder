#include<iostream>
using namespace std;

class demo{

    int a, b;
    public:
    demo (int x , int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"Value of a= "<<a<<endl<<"value odf b= "<<b<<endl;
    }

    void operator -(){
        a=-a;
        b=-b;
    }
};

int main(){

    demo ob(-20, 34);
    ob.show();
    -ob;
    ob.show();
    return 0;
}