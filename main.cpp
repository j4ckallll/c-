#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the number of students :";
    cin >> num;

    int* arr = new int[num];

    cout << "Enter " << num << " numbers : ";
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}