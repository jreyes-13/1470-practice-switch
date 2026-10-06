#include <iostream>
using namespace std;

int main() {

    int number = 10;
    
    if (number == 0) {
        cout << "Zero";
    }
    else if (number % 2 == 0) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }


    return 0;
}
