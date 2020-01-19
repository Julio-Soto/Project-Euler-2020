#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 9" << endl;
    cout << "Pythagorean triplet for which a + b + c = 1000" << endl;
    cout << "the Product a * b * c" << endl;
    int a,b,c = 1;

    //  Using Euclid's formula for generating Pythagorean Triplets we will look
    //  for one triplet where a + b + c = 1000
    //  Considering that 32^2 = 1024 then 32 would be a reasonable MAX value for m and n
    for(int m = 1; m < 32; m++){
        for(int n = 1; n < 32; n++){
            a = (m*m) - (n*n); // Euclid's formula
            b = 2*m*n;
            c = (m*m) + (n*n);
            if(a+b+c == 1000) cout << a << " * " << b << " * " << c << " = " << a*b*c << endl;
        }
    }
    return 0;
}
