#include<iostream>
using namespace std;

class demo{

    int a,b;

    public:

    demo(int x, int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"value of a= "<<a<<"\t"<<"value of b = "<<b<<endl;
    }

    friend demo operator +(demo &obj, demo &obj2);
};

demo operator +(demo &obj, demo &obj2){

    demo temp(0,0);
    temp.a=obj2.a+ obj.a;
    temp.b=obj2.a+ obj.b;
    return temp;
}

int main(){

    demo ob(12, 33), ob1(45,34), ob2(0,0);
    ob2= ob + ob1;
    ob.show();
    ob1.show();
    ob2.show();
    return 0;
}