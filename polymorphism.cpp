//  Polymorphism refers to the ability of acquiring many forms.
// In the context of OOP this measns that the same function name denotes many functions that are members of difeernt objects.
#include <iostream>
using namespace std;

class Class1;
class Class2;
int main()
{

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