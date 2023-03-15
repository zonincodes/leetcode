#include <iostream>

using namespace std;

double f(double x);
double sum(double (*f)(double), int n, int m);

int main ()
{
    cout << sum(f, 1, 5) << endl;
    return 0;    
}


double f(double x){
    return 2 * x;
}

double sum (double (*f) (double), int n, int m){
    double result = 0;
    for (int i = n; i <= m; i++){
        result += f(i);
    }
    return result;
}

