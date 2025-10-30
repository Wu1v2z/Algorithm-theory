#include <iostream>
using namespace std;

int main() {
    const int N = 12; // розмір початкового масиву
    double arr[N];    // вихідний масив
    double odd[N / 2];  // масив для елементів з непарних позицій
    double even[N / 2]; // масив для елементів з парних позицій
    int oddCount = 0;
    int evenCount = 0;

    cout << "Введіть 12 дійсних чисел:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // розділення елементів на два масиви
    for (int i = 0; i < N; i++) {
        if ((i + 1) % 2 == 1) {
            // непарна позиція (1, 3, 5, ...)
            odd[oddCount] = arr[i];
            oddCount++;
        } else {
            // парна позиція (2, 4, 6, ...)
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    cout << "\nЕлементи на непарних позиціях:\n";
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }

    cout << "\n\nЕлементи на парних позиціях:\n";
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }

    cout << endl;
    return 0;
}
