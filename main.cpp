#include <iostream>
#include <string>
using namespace std;

int after5(int, int, string); 

int main() {
    int age;
    age = 24;

    cout << after5(age, 2, "Hello") << endl; 
    cout << after5(20, 5, "Hi") << endl;

    return 0;
}


int after5(int a, int b, string greeting) {
    
    return a + b;
}