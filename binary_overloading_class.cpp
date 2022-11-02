#include <iostream>
using namespace std;

class test
{

    int a, b;

public:
    test(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "value of a= " << a << "\t"
                << "value of b = " << b << endl;
    }
    test(){

    }
    test operator+(test t)
    {
        test obj;
        obj.a = a + t.a;
        obj.b = b + t.b;
        return obj;
    }
};

void operator+(test t)
{
}

int main()
{

    test ob(10, 20), ob1(20, 30), ob2;
    ob2 = ob + ob1;
    ob.show();
    ob1.show();
    ob2.show();
}