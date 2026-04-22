#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    const int rows = 3, cols = 4;
    int arr[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 100;
        }
    }

    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            int minIndex = j;

            for (int k = j + 1; k < cols; k++) {
                if (arr[i][k] < arr[i][minIndex]) {
                    minIndex = k;
                }
            }

            swap(arr[i][j], arr[i][minIndex]);
        }
    }

    cout << "Відсортована матриця:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}