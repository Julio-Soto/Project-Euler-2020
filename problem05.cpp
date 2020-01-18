#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 5" << endl;
    cout << "Smallest Multiple" << endl;

    bool solved = false;
    int testNumber = 10;
    int i = 0;

    while(!solved){
        ++testNumber;
        solved = true;
        i = 2;
        while(i <= 20 && solved == true){
            if(testNumber%i != 0) solved = false;
            ++i;
        }
    }
    cout << "the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: " << testNumber <<endl;
    return 0;
}
