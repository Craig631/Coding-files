// 2D Arrays
/*
AUTHOR:CRAIG
REG NO:BSE-05-0209/2024
GROUP : 3
DATE : 4/03/2024
*/

#include <iostream>
using namespace std;

#define PRINT_2D_ARRAY(arr, rows, cols) \
    for (int i = 0; i < rows; i++) { \
        for (int j = 0; j < cols; j++) { \
            cout << arr[i][j] << "\t"; \
        } \
        cout << endl; \
    }

int main() {
    int marks[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };
    
    PRINT_2D_ARRAY(marks, 2, 3);
    
    return 0;
}
