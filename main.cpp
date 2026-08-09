#include <iostream>
using namespace std;

int main() {

    int D3Array[2][5][5] = {
        {
            {21, 22, 21, 34, 45},
            {21, 22, 21, 34, 45},
            {21, 22, 21, 34, 45},
            {21, 22, 21, 34, 45},
            {21, 22, 21, 34, 45}
        },
        {
            {21, 22, 21, 34, 45},
            {21, 22, 21, 34, 45},
            {21, 22, 21, 34, 45},
            {21, 22, 21, 34, 45},
            {21, 22, 21, 34, 45}
        }
    };

    for (int i = 0; i < 2; i++) {
        cout << "Block " << i << ":" << endl;
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                cout << D3Array[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}