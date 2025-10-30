#include <iostream>
#include <cmath>
#include <iomanip>


const int SIZE = 12;
const int HALF_SIZE = 6;

void task1_array_split(const double original_array[SIZE], 
                      double odd_pos_array[HALF_SIZE], 
                      double even_pos_array[HALF_SIZE]) {
    
    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < SIZE; i++) {
        
        
        if (i % 2 == 0) {
          
            even_pos_array[even_count] = original_array[i];
            even_count++;
        } else {
         
            odd_pos_array[odd_count] = original_array[i];
            odd_count++;
        }
    }
}
int main() {
    double A[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 
                      7.7, 8.8, 9.9, 10.10, 11.11, 12.12};
    
    double B_odd[HALF_SIZE];  // Елементи з непарних індексів (2.2, 4.4, ...)
    double C_even[HALF_SIZE]; // Елементи з парних індексів (1.1, 3.3, ...)

    task1_array_split(A, B_odd, C_even);

    std::cout << "--- Завдання 1 ---\n";
    std::cout << "Масив B (Непарні індекси): ";
    for (int i = 0; i < HALF_SIZE; i++) {
        std::cout << std::fixed << std::setprecision(2) << B_odd[i] << " ";
    }
    std::cout << "\nМасив C (Парні індекси):   ";
    for (int i = 0; i < HALF_SIZE; i++) {
        std::cout << std::fixed << std::setprecision(2) << C_even[i] << " ";
    }
    std::cout << "\n\n";

    return 0;
}