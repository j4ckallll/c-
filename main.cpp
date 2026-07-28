#include <iostream>
using namespace std;

int main() {
    int age = 14;

    if (age < 18)
    {
        cout << "You are a Child" << endl;
    }
    else if (age > 60)
    {
        cout << "You are a Senior Citizen" << endl;
    }
    else
    {
        cout << "You are an Adult" << endl;
    }

    return 0;
}