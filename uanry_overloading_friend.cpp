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
        cout<<"value of a= "<<a<<"\t"<<"value of b= "<<b<<endl;
    }
    friend void operator -(demo &d);
};

void operator -(demo &d){
    d.a=-d.a;
    d.b=-d.b;
}

int main(){

    demo obj(23, 45), o(12, 78), ob(67, 98);
    obj.show();
    o.show();
    ob.show();
    -obj;   -o;     -ob;
    obj.show();
    o.show();
    ob.show();
    return 0;
}