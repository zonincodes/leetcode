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