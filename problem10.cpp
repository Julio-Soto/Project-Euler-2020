/*

        The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

        Find the sum of all the primes below two million.

*/

#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

bool isPrime(int testNumber){
    int i = 2;
    bool isPrime = true;

    // Brute force iteration to find out
    //if the test number is evenly divisible by any number.
    while(isPrime == true && i <= testNumber/2){
        if(testNumber % i == 0){ isPrime = false;}
        ++i;
    }

    return isPrime;
}
/*
    SOLUTION:
    Since building a sequence of primes takes too many computations.
    Build a Sieve of composites that in consequence is also a sieve of PRIMES.

*/
int main(){
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 10" << endl;
    cout << "Summation of Primes" << endl;

    long long int summation = 0;
    int n = 2000000;
    vector<int> sieve(n,NULL);
    double sqrtOfn = sqrt(n);
    sieve[1] = 1; //initial value for the sieve

    for(int k = 4;k < sieve.size(); k+=2)  //fill the sieve with all the even composites from 4 to n
        sieve[k] = k;

    for(int p = 3 ;p <= sqrtOfn ; ++p){   //Check for primes only to sqrt(n)
        if(isPrime(p)){
                for(int i = p;i <= n/p; i+=2)  // use those primes to generate all the composites from 3 to n
                sieve[p * i] = (p * i);   //fill the sieve with all the odd composites
        }
    }

    for(int k = 2;k < sieve.size(); ++k) // the sieve has all the composites so
       if(sieve[k] == NULL) summation += k; // all NULL values in the sieve correspond to a PRIME NUMBER index.

    cout << "The sum of all primes bellow " << n << " is: " << summation << endl;

    return 0;
}
// soln: 142913828922
