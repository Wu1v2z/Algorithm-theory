#include <iostream>
using namespace std;

int main() {
    int n;
    bool p = true; 
    cout << "Введіть число більше 1 : ";
    cin >> n;

    if (n <= 1) {
        p = false; 
    } else {
        for (int i = 2; i * i <= n; i++) { 
            if (n % i == 0) {
                p = false;
                break;
            }
        }
    }

    cout << boolalpha << "Число просте? " << p << endl;
    return 0;
}
