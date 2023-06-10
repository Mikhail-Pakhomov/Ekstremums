#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int array[] = { 5, 2, 9, 1, 7 , -82838, 27773, 38858};

    int n = sizeof(array) / sizeof(array[0]);

    int найбільше = array[0];
    int найменше = array[0];

    for (int i = 1; i < n; i++) {
        if (array[i] > найбільше) {
            найбільше = array[i];
        }

        if (array[i] < найменше) {
            найменше = array[i];
        }
    }

    std::cout << "Найменше значення: " << найменше << std::endl;
    std::cout << "Найбільше значення: " << найбільше << std::endl;

    return 0;
}