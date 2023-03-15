#include <iostream>
using namespace std;
#include <string.h>

struct Node{
    char *name;
    int age;
    Node (char *n = "", int a = 0){
        name = strdup(n);
        age = a;
    }
};

int main(){
    Node node1("Roger", 20), node2(node1);

    cout << node1.name << " " << node1.age << " " << node2.name << " " << node2.age << endl; 
    return 0;
}