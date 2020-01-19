#include<iostream>

using namespace std;

bool isPrime(int testNumber){
    long int i =0;
    bool isPrime = true;

    for(i = 2; i <= testNumber/2; ++i){
        if(testNumber%i == 0)   isPrime = false;
    }
    return isPrime;
}

int main(){
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 7" << endl;
    cout << "The 10001 Prime" << endl;

    int count = 0;

    int i = 1;
    while(count < 10001){
        ++i;
        if(isPrime(i)) ++count;
    }

    cout << "The 10001th Prime is: " << i << endl;
    return 0;
}
