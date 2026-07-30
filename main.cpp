#include <iostream>
using namespace std;

int main() 
{
  int age;
  cout << "Enter your age: " << endl;
  cin >> age;
  
  if (age > 60)
  {
    cout << "You are overaged" << endl;
  }
  else if (age >= 18)
  {
    cout << "You are eligible to vote";
  }
  else
  {
    cout << "You are not eligible to vote" << endl;
  }
  
  return 0;
}