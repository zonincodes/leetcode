#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Person{};

int main (){

    return 0;
}

class Person {
    public:
        Person(char *n = "", int a = 0){
            name = strdup(n);
            age = a;
        }

        ~Person() {
            free(name);
        }

        bool operator==(const Person &p) const {
            return strcmp(name, p.name) == 0 && age == p.age;
        }

        bool operator<(const Person &p) const {
            return !(*this == p) && !(*this < p);
        }

        bool operator>(const Person &p) const {
            return !(*this == p) && !(*this < p);
        }

    private:
        char *name;
        int age;
};