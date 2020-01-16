#include<iostream>
#include<vector>

using namespace std;

bool isPrime(long long int testNumber){
    long int i =0;
    bool isPrime = true;

    for(i = 2; i <= testNumber/2; ++i){
        if(testNumber%i == 0)   isPrime = false;
    }
    return isPrime;
}

int main(){
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 3" << endl;
    cout << "Largest Prime Factor" << endl;
    
    long long int numberToFactor = 600851475143;
    long long int nextFactor = numberToFactor;
    vector<int> primeFactors;

    for(long int k =2; k <= nextFactor; ++k)
        if(nextFactor%k == 0)
            if(isPrime(k)){
                primeFactors.push_back(k);
                nextFactor = nextFactor/k;
                k=2;
            }

    cout << "The Prime Factors of " << numberToFactor << " are: " << endl;
    for(int k = 0;k < primeFactors.size(); ++k)
        cout << primeFactors[k] << "  ";

    cout << endl << "the Largest Prime Factor of " << numberToFactor << " is: " << primeFactors.back() << endl;
    return 0;
}
