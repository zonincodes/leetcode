//  Polymorphism refers to the ability of acquiring many forms.
// In the context of OOP this measns that the same function name denotes many functions that are members of difeernt objects.
#include <iostream>
using namespace std;

class Class1;
class Class2;
class Class3;
int main()
{
    Class1 object1, *p;
    Class2 object2;
    Class3 object3;
    p = &object1;
    p->f(); 
    // p->g(); 
    p = (Class1 *)&object2;
    p->f();
    // p->g();
    p = (Class1 *)&object3;
    p->f(); // possibly abnormal program termination;
    // p->g();
    // p->h(); // h() is not a member of Class1;
    return 0;
}


class Class1 {
    public: 
        virtual void f() {
            cout << "Function f() in Class1\n" ;
        }
};


class Class2 {
    public:
        virtual void f() {
            cout << "Function f() in Class2 \n";
        }

        void g() {
            cout << "Function g() in Class2 \n";
        }
};

class Class3 {
    public:
        virtual void f() {
            cout << "Function f() in Class3 \n";
        }
};