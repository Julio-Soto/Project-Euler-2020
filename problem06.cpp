#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 6" << endl;
    cout << "Sum square difference" << endl;

    int n = 100;
    int sumOfn = 0;
    int sumOfSquaresofn = 0;

    sumOfn = n * (n+1) / 2;
    sumOfSquaresofn = ( n * (n + 1) * (2*n + 1) )/6;
    cout << "The sum of the Squares of the first 100 numbers is: " << sumOfSquaresofn << endl;
    cout << "The Square of the Sum of the first 10 natural numbers: "<< sumOfn * sumOfn << endl;
    cout << endl << "The difference between the sum of the squares of the first ten natural numbers and the square of the sum is : "
     << (sumOfn * sumOfn) - sumOfSquaresofn << endl;

    return 0;
}
