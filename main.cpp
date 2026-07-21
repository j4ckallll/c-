#include <iostream>
using namespace std;

int main() {
    int age = 24; // = - Assignment operator

    age = age + 5;
    age += 5; // addition assignment
    age = age - 2;
    age -= 2; // subtraction assignment
    age = age * 6;
    age *= 6; // multiplication assignment
    cout << age;
    age = age / 6;
    age /= 6; // division assignment
    age = age % 1;
    age %= 1;

    return 0;
}