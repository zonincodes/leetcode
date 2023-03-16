#include <iostream>
using namespace std;
#include <string.h>

struct Node{
    char *name;
    int age;

    Node &operator=(const Node &n)
    {
        if (this != &n)
        { // no assignment to itself;
            if (name != 0)
                free(name);
            name = strdup(n.name);
            age = n.age;
        }
        return *this;
    }
    
    Node (char *n = "", int a = 0){
        name = strdup(n);
        age = a;
    }

    
};

int main(){
    Node node1("Roger", 20), node2 = node1;

    cout << node1.name << " " << node1.age << " " << node2.name << " " << node2.age << endl; // Roger 20 Roger 20

    // assigning values to one data member to see what happens
    strcpy(node2.name, "Wendy");
    node2.age = 30;
    // print the statement again
    cout << node1.name << " " << node1.age << " " << node2.name << " " << node2.age << endl; // Wendy 20 Wendy 30



    return 0;
}