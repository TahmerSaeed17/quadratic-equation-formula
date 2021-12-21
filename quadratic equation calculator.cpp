//Tahmer Saeed
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
    double a, b, c, d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    
    double root1 = 0;
    double root2 = 0;
    
    cout << "Enter value for a: " <<endl;
    cin>> a;
    cout << "Enter value for b: " <<endl;
    cin>> b;
    cout << "Enter value for c: " <<endl;
    cin>> c;
    
     d =  b*b - 4*a*c;
    root1 = (-b + sqrt(d)) / (2*a);
    root2 = (-b - sqrt(d)) / (2*a);
    
    cout << "Your two roots are: " << root1 << ", " << root2 <<endl;
    
    return 0;
}
