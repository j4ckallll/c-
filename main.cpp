#include <iostream>
using namespace std;

int main() {
    
    int age = 24;
    float gpa = 9.8;
    double pi = 3.1415161718;
    bool isAdult = false;
    char gender = 'M';
    
    cout<<"Size of int:" << sizeof(age) << " Bytes" <<endl;
    cout<<"Size of float:" << sizeof(gpa) << " Bytes" <<endl;
    cout<<"Size of double:" << sizeof(pi) << " Bytes" <<endl;
    cout<<"Size of bool:" << sizeof(isAdult) << " Bytes" <<endl;
    cout<<"Size of char:" << sizeof(gender) << " Bytes" <<endl;
    
    return 0;
}