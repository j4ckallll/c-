#include <iostream>
using namespace std;

int main() {

    int D2Array[5][5] = {
        {21, 22, 21, 34, 45},
        {21, 22, 21, 34, 45},
        {21, 22, 21, 34, 45},
        {21, 22, 21, 34, 45},
        {21, 22, 21, 34, 45}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << D2Array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}