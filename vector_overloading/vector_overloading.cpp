#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <algorithm>

using namespace std;




class Person {
    public:
        Person(string n = "", int a = 0) : name(new char[n.length() + 1]), age(a)
        {
            strcpy(name, n.c_str());
        }

        string get_name(){
            return name;
        }

        int get_age(){
            return age;
        }

        // ~Person() {
        //     free(name);
        // }

        bool operator==(const Person& p) const {
            return strcmp(name, p.name) == 0 && age == p.age;
        }

        bool operator<(const Person& p) const {
            return strcmp(name, p.name) < 0;
        }

        bool operator>(const Person& p) const {
            return !(*this == p) && !(*this < p);
        }

    private:
        char *name;
        int age;
        friend bool lesserAge(const Person &, const Person &);
};

int main()
{
        // declaration
        vector<Person> v6(1, Person("Gregg", 25));

        // add more objects
        v6.push_back(Person("Ann", 30));
        v6.push_back(Person("Bill", 20));

        //  executing
        sort(v6.begin(), v6.end());

        for (Person p : v6)
        {
            cout << p.get_name() << " " << p.get_age() << endl;
        }
        return 0;
}