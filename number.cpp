#include <iostream>
using namespace std;

int main() {

    int number = 10;
    
    if (number %2 == 1) {
        cout << "Odd";
    }
    else if (number % 2 == 0) {
        cout << "Even";
    }
    else {
        cout << "Zero";
    }


    return 0;
}
