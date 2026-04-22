#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    const int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Масив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}