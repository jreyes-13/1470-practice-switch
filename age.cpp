#include <iostream>
using namespace std;

int main() {
    int age = 20;

    if (age < 13) {
        cout << "Child";
    }
    else if (age < 18) {
        cout << "Teenager";
    }
    else if (age < 65) {
        cout << "Adult";
    }
    else {
        cout << "Senior";
    }

    return 0;
}
