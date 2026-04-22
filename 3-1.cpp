#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    const int n = 10;
    int arr[n];

    int comparisons = 0;
    int swaps = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Масив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            comparisons++; 
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swaps++; // рахуємо тільки реальні обміни
        }
    }

    cout << "Відсортований масив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Кількість порівнянь: " << comparisons << endl;
    cout << "Кількість обмінів: " << swaps << endl;

    return 0;
}