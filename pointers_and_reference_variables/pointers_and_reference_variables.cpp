#include <iostream>
using namespace std;

void swap(int i, int *j, int &k);
int main () {

    int n = 5, *p = &n, &r =n;

    // variable p is declared being of type int *, a pointer to interger
    //  variable r is type int&, an integer reference
    //  A refence variable must be intialized in its declaration as a refence variable
    // cannot be null

    cout << n << " " << *p << ' ' << r << endl; // 5 5 5

    // n = 7
    n = 7;
    
    cout << n << " " << *p << ' ' << r << endl; // 7 7 7

    // These statements indicate that in terms of notation, what we can accomplish with 
    // dereferencing of pointer variables is accomplished without dereferencing of reference 
    // variables.This is no accident because, as mentioned, reference variables are 
    // implemented as constant pointers.
    
    int i = 3, j = 23, k = 32; 

    cout << "Intially : " << i << " " << j << " " << k << endl; 
    swap(i, &j, k);
    cout << "After Swap : " << i << " " << j << " " << k << endl;

    return 0;
}

void swap(int i, int *j, int &k){
    i = 1;
    *j = 2;
    k = 3;
}