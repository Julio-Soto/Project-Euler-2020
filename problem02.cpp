#include <iostream>

using namespace std;

int main()
{
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 2" << endl;
    cout << "Sum of the Fibonacci numbers that are even and less than 4 million" << endl;

    int fibonacciSeq[34] = {0};
    int sum =0;

    fibonacciSeq[0] = 0;
    fibonacciSeq[1] = 1;

    // first 33 numbers of the Fibonacci Sequence are less that 4 million
    for(int i = 2;i < 34; ++i){
        fibonacciSeq[i] = fibonacciSeq[i - 1] + fibonacciSeq[i - 2];
        cout << "Fibonacci " << i << ": " << fibonacciSeq[i] << endl;
    }
    // Sum of the even values within that sequence
    for(int k = 0;k < 34;++k){
        if(fibonacciSeq[k]%2 == 0)
            sum = sum + fibonacciSeq[k];
    }

    cout << endl << "the Sum of the even values within that sequence is: " << sum << endl;

    return 0;
}
