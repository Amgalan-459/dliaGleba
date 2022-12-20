#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
//Albert pohel na fig

void lin() {
    for (int i = 0; i < 50; i++)
        cout << "*";
    cout << endl;
}

class A { //родительский класс
protected:
    int a1 = 10;
    double d = 23.66;
    int c = 23;
public:
    A() {
        cout << "Construction A" << endl;
    }
    ~A() {
        cout << "Destructor A" << endl;
    }
    void function_a() {
        cout << "work class A" << endl;
    }
    void sum1() {
        cout << (a1 + c) << endl;
    }
};

/*class B {   //агрегирование класса
public:    
    A* obj_a;
    void function_b() {
        cout << "Class B" << endl;
        obj_a->function_a();
    }
};*/

class B : public A {
    int b;
    string str;
protected:
    int dsf = 10;
    string s = "adfsfd";
    int b1 = 10;
public:
    B() {
        cout << "Construction B" << endl;
    }
    ~B() {
        cout << "Destructor B" << endl;
    }
    void function_b() {
        cout << "B" << endl;
        function_a();
    }
};
class C : public B {

public:
    C() {
        cout << "Construction C" << endl;
    }
    ~C() {
        cout << "Destructor C" << endl;
    }
    void function_c() {
        function_a();
        function_b();
        cout << "class C" << endl << a1 << " " << s << " " << d << endl;
    }
    void sum() {
        int c = a1 + b1;
        cout << c << endl;
    }
};

class D : public B {
public:
    void function_d() {
        function_a();
        function_b();
        cout << "D" << endl;
    }
};

int main(){
    setlocale(LC_ALL, "ru");
    int a = 1;

    for (int i = 0; i < 10; i++)
        cout << a++ << endl;
    A obj_a;
    B obj_b;
    C obj_c;
    obj_b.function_b();
    lin();
    obj_b.function_a();
    obj_c.function_c();
    lin();
    obj_c.sum();
    obj_a.sum1();
    lin();

    A a12;
    lin();
    B b213;
    lin();
    C c324;
    lin();
    D sa;
    sa.function_d();
    lin();



    return 0;
    
}
