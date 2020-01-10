#include <iostream>

using namespace std;

int main()
{
    cout << "Hello Project Euler!" << endl;
    cout << "Problem # 1" << endl;
    cout << "Sum of the Multiples of 3 and 5 bellow 1000" << endl;

    int sum = 0;

    cout << "List of Multiples of 3 and 5" << endl;
    for(int i = 0;i < 1000;++i){

        if(i%3 == 0 || i%5 == 0){
            cout << i << endl;
            sum = sum + i;
        }
    }
    cout << "     The Sum is: " << sum << endl;
    return 0;
}
