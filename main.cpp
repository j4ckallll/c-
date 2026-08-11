#include <iostream>
using namespace std;

int main() {

    int age = 24;

    int copyAge = age;
    int &aliasAge = age;

    age = 25;

    cout << "Reference " << aliasAge << endl;
    cout << "Copy " << copyAge << endl;

    cout << &age << endl;

    int* ptr = &age;

    cout << "ptr " << ptr << endl;
    cout << "*ptr " << *ptr << endl;

    *ptr = 56;

    cout << age << endl;

    return 0;
}