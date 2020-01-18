#include<iostream>
#include<string>
#include <sstream>

using namespace std;

bool isPalindrome(int testNumber){
    bool isPalindrome = true;
    stringstream ss;
    ss << testNumber;
    string testNumberStr = ss.str();

    for(int i = 0;i < testNumberStr.size(); ++i)
        if(testNumberStr[testNumberStr.size() - (i + 1)] != testNumberStr[i])
            isPalindrome = false;

    return isPalindrome;
}

int main(){
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 4" << endl;
    
    int soln,a,b = 0;

    for(int k = 100; k < 1000; ++k)
        for(int i = 100;i < 1000;++i)
        if(isPalindrome(k * i)){
                if((k*i) > soln) {
                        a = k;
                        b = i;
                        soln = (k*i);
                }
        }

    
    cout << "The Largest Palindrome Product of 3 digit Numbers is: " << a << " x " << b << " = " << soln << endl;
    return 0;
}
