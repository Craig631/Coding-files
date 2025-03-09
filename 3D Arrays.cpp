// 3D Arrays
/*
AUTHOR:CRAIG
REG NO:BSE-05-0209/2024
GROUP : 3
DATE : 4/03/2024
*/
#include <iostream>
using namespace std;

#define PRINT_3D_ARRAY(arr, x, y, z) \
    for (int i = 0; i < x; i++) { \
        for (int j = 0; j < y; j++) { \
            for (int k = 0; k < z; k++) { \
                cout << arr[i][j][k] << "\t"; \
            } \
            cout << endl; \
        } \
        cout << endl; \
    }

int main() {
    int marks[2][2][3] = {
        {
            {10, 20, 30},
            {40, 50, 60}
        },
        {
            {10, 20, 30},
            {40, 50, 60}
        }
    };
    
    PRINT_3D_ARRAY(marks, 2, 2, 3);
    
    return 0;
}
