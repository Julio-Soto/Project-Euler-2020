#include<iostream>

using namespace std;

bool isPrime(int testNumber){
    int i = 2;
    bool isPrime = true;

    while(isPrime == true && i <= testNumber/2){
        if(testNumber % i == 0){ isPrime = false;}
        ++i;
    }

    return isPrime;
}

int main(){
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 10" << endl;
    cout << "Summation of Primes" << endl;

    long long int summation = 0;

    for(int k = 2 ;k < 2000000; ++k){
        if(isPrime(k)) summation += k;
    }

    cout << "The sum of all primes bellow 2,000,000 is: " << summation << endl;

    return 0;
}
//142913828922
