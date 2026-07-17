#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 6;
    
    int sum = a + b;             
    int diff = a - b;          
    int product = a * b;        
    double div = (double)a / b;  
    
    // Display results
    cout << "Sum: " << sum << endl;
    cout << "Diff: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << div << endl;
    
    return 0;
}